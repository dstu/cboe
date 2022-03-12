/*
 *  fileio.cpp
 *  BoE
 *
 *  Created by Celtic Minstrel on 22/04/09.
 *
 */

#include "fileio.hpp"

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <boost/filesystem/operations.hpp>

#include "src/fileio/resmgr/res_image.hpp"
#include "src/fileio/resmgr/res_cursor.hpp"
#include "src/fileio/resmgr/res_font.hpp"
#include "src/fileio/resmgr/res_strings.hpp"
#include "src/fileio/resmgr/res_sound.hpp"

bool mac_is_intel;
boost::filesystem::path progDir, tempDir, scenDir;

// This is here to avoid unnecessarily duplicating it in platform-specific files.
cursor_type Cursor::current = sword_curs;

std::filebuf logfile;

static boost::filesystem::path get_posix_tempdir();

static void add_resmgr_paths(const boost::filesystem::path& basePath) {
	ResMgr::graphics.pushPath(basePath/"graphics");
	ResMgr::cursors.pushPath(basePath/"cursors");
	ResMgr::fonts.pushPath(basePath/"fonts");
	ResMgr::strings.pushPath(basePath/"strings");
	ResMgr::sounds.pushPath(basePath/"sounds");
}

void init_directories(const char* exec_path) {
	progDir = boost::filesystem::canonical(exec_path);
#ifdef __APPLE__
	// Need to back up out of the application package
	// We're pointing at .app/Contents/MacOS/exec_name, so back out three steps
	progDir = progDir.parent_path().parent_path().parent_path();
#endif
	progDir = progDir.parent_path();
	// Initialize the resource manager paths
	add_resmgr_paths(progDir/"boe.runfiles"/"__main__"/"rsrc");
	
	// We need a location for temporary files, primarily for loading and saving operations
	// The scenario editor may also use this location as "scratch space"
#if defined(_WIN32) || defined(_WIN64)
	tempDir = getenv("APPDATA");
	tempDir /= "Blades of Exile";
#elif defined(__APPLE__)
	tempDir = getenv("HOME");
	tempDir /= "Library/Application Support/Blades of Exile";
#else
	tempDir = get_posix_tempdir();
#endif
	scenDir = tempDir/"Scenarios";
	boost::filesystem::create_directories(scenDir);
	add_resmgr_paths(tempDir/"data");
	tempDir /= "Temporary Files";
	
	// Depending on the build environment, we may need to redirect stdout and stderr.
#ifdef _MSC_VER
#ifdef DEBUG
	void set_debug_buffers();
	set_debug_buffers();
#else
	std::string logpath = (tempDir.parent_path()/"bladeslog.txt").string();
	logfile.open(logpath.c_str(), std::ios::out);
	std::cout.rdbuf(&logfile);
	std::cerr.rdbuf(&logfile);
#endif
	std::cout << "Testing cout" << std::endl;
	std::cerr << "Testing cerr" << std::endl;
	sf::err().rdbuf(std::cerr.rdbuf());
#endif
	// Now print all the paths
	std::cout << "Working directory: " << boost::filesystem::current_path() << std::endl;
	std::cout << "Program directory: " << progDir << std::endl;
	std::cout << "Scenario directory: " << scenDir << std::endl;
	std::cout << "Temporary directory: " << tempDir << std::endl;
}

boost::filesystem::path get_posix_tempdir() {

	boost::filesystem::path tempdir;

	const char* xdg_config_dir = std::getenv("XDG_CONFIG_HOME");

	if(xdg_config_dir != nullptr) {
		tempdir = xdg_config_dir;
	} else {
		// Default to $HOME/.config
		const char* home = std::getenv("HOME");

		if(home == nullptr)
			throw std::runtime_error { "HOME and XDG_CONFIG_HOME env variables not set!" };

		tempdir = home;
		tempdir /= ".config";
	}

	tempdir /= "openboe/blades";

	return tempdir;
}

void check_for_intel() {
	union {uint16_t x; uint8_t c;} endian;
	endian.x = 1;
	mac_is_intel = endian.c;
}
