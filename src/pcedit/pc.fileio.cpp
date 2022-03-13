
#include <cstdio>
#include <cstring>

#include "src/fileio/fileio.hpp"
#include "src/pcedit/pc.editors.hpp"
#include "src/pcedit/pc.fileio.hpp"
#include "src/pcedit/pc.graphics.hpp"
#include "src/sounds.hpp"
#include "src/universe/universe.hpp"
#include "src/tools/mathutil.hpp"

extern cUniverse univ;
extern bool party_in_scen,scen_items_loaded;
extern void update_item_menu();
void load_base_item_defs();

extern boost::filesystem::path progDir;

void leave_town() {
	univ.party.town_num = 200;
}

void remove_party_from_scen() {
	univ.exportGraphics();
	univ.exportSummons();
	univ.party.scen_name = "";
	party_in_scen = false;
	load_base_item_defs();
}

void load_base_item_defs(){
	boost::filesystem::path basePath = progDir/"Blades of Exile Base"/"bladbase.boes";
	scen_items_loaded = load_scenario(basePath, univ.scenario);
}
