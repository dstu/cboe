
#include "src/dialogxml/widgets/dialog.hpp"
#include "src/universe/pc.hpp"

#include <SFML/Window/Event.hpp>

bool handle_action(const sf::Event&);
void flash_rect(rectangle to_flash);
void edit_gold_or_food(short which_to_edit);
void display_pc(short pc_num,short mode,cDialog* parent);
void display_alchemy(bool allowEdit,cDialog* parent);
void edit_day();
void edit_xp(cPlayer *pc);
