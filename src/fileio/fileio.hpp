/*
 *  fileio.h
 *  BoE
 *
 *  Created by Celtic Minstrel on 22/04/09.
 *
 */

#ifndef BOE_FILEIO_HPP
#define BOE_FILEIO_HPP

#include <string>
#include <vector>
#include <sstream>
#include <SFML/System/InputStream.hpp>
#include <boost/filesystem/path.hpp>

class cScenario;
class cUniverse;

boost::filesystem::path locate_scenario(std::string scen_name);
bool load_scenario(boost::filesystem::path file_to_load, cScenario& scenario, bool only_header = false);

bool load_party(boost::filesystem::path file_to_load, cUniverse& univ);
bool save_party(boost::filesystem::path dest_file, const cUniverse& univ);

void init_directories(const char* exec_path);
void check_for_intel();

// SFML doesn't support standard C++ streams, so I need to do this in order to load images from a stream.
class StdInputStream : public sf::InputStream {
	std::istream& stream;
public:
	StdInputStream(std::istream& stream) : stream(stream) {}
	virtual ~StdInputStream() {}
	// TODO: All four of these functions should return -1 on failure, but I'm not quite sure which conditions should be counted as failure
	virtual sf::Int64 read(void *data, sf::Int64 size) {
		stream.read((char*)data, size);
		return stream.gcount();
	}
	virtual sf::Int64 seek(sf::Int64 position) {
		stream.seekg(position);
		return tell();
	}
	virtual sf::Int64 tell() {
		return stream.tellg();
	}
	virtual sf::Int64 getSize() {
		auto was_at = stream.tellg();
		stream.seekg(0, std::ios::end);
		auto pos = stream.tellg();
		stream.seekg(was_at);
		return pos;
	}
};

#endif
