#include "src/game/boe.menus.hpp"

#include <SFML/Graphics.hpp>
#include <memory>
#include <string>
#include <unordered_map>

#include "src/game/boe.consts.hpp"
#include "src/game/boe.consts.hpp"
#include "src/game/boe.menu.hpp"
#include "src/global.hpp"
#include "src/universe/universe.hpp"
#include "src/tools/drawable_manager.hpp"
#include "src/tools/event_listener.hpp"

extern sf::RenderWindow mainPtr;
extern cUniverse univ;
extern bool party_in_memory;
extern eGameMode overall_mode;
extern std::unordered_map<std::string, std::shared_ptr<iEventListener>> event_listeners;
extern cDrawableManager drawable_mgr;

std::shared_ptr<OpenBoEMenu> menu_ptr;

void init_menubar() {
	menu_ptr.reset(new OpenBoEMenu(mainPtr, univ));
	
	event_listeners["menubar"] = std::dynamic_pointer_cast<iEventListener>(menu_ptr); 
	drawable_mgr.add_drawable(UI_LAYER_MENUBAR, "menubar", menu_ptr); 
}

void adjust_monst_menu() {
	menu_ptr->update_monsters_menu();
}

void init_spell_menus() {
}

void adjust_spell_menus() {
	menu_ptr->update_spell_menus();
}

void menu_activate() {
	menu_ptr->update_for_game_state(overall_mode, party_in_memory);
}

void hideMenuBar() {
}

void showMenuBar() {
}

void set_up_apple_events(int argc, char* argv[]) {

}
