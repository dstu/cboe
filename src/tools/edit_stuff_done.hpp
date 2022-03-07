#ifndef SRC_TOOLS_EDIT_STUFF_DONE_H_
#define SRC_TOOLS_EDIT_STUFF_DONE_H_

#include <map>

#include "src/dialogxml/widgets/dialog.hpp"
#include "src/skills_traits.hpp"
#include "src/universe/pc.hpp"

// Shared between editor and game.
void edit_stuff_done();

// Mode is one of the following:
// 0 - Creating a new character (need skill points but not gold)
// 1 - Training a character (need both skill points and gold)
// 2 - Editing a character (need neither skill points nor gold)
bool spend_xp(short pc_num, short mode, cDialog* parent);

struct xp_dlog_state {
	std::map<eSkill,short> skills;
	int who, mode;
	int hp, sp, g, skp;
};

//mode; // 0 - edit  1 - just display  2 - can't change race
void pick_race_abil(cPlayer *pc,short mode,cDialog* parent);

void display_alchemy(bool allowEdit,cDialog* parent);

void display_pc(short pc_num,short mode, cDialog* parent);

#endif  // SRC_TOOLS_EDIT_STUFF_DONE_H_
