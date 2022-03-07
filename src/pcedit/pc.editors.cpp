
#include "pc.graphics.hpp"
#include "universe.hpp"
#include "pc.editors.hpp"
#include "utility.hpp"
#include "dialog.hpp"
#include "control.hpp"
#include "button.hpp"
#include "ledgroup.hpp"
#include "pict.hpp"
#include "strdlog.hpp"
#include "choicedlog.hpp"
#include "winutil.hpp"
#include "cursors.hpp"
#include "render_shapes.hpp" // for colour constants
#include <boost/lexical_cast.hpp>

/*
 * These three are not declared in any included header.
 * Instead they are declared in pc.actions.h, which is not
 * included here because it contains additional functions that
 * should not be available to the game (which also includes
 * this file).
 *
 * For the game's purposes, these are declared in
 * boe.infodlg.h and boe.party.h.
 */
void display_pc(short pc_num,short mode,cDialog* parent);
void display_alchemy(bool allowEdit,cDialog* parent);
bool spend_xp(short pc_num, short mode, cDialog* parent);
// TODO: There's probably a more logical way of arranging this

extern void give_help(short help1, short help2);
extern void give_help(short help1, short help2, cDialog& parent);
void display_skills(eSkill skill,cDialog* parent);

extern cUniverse univ;
extern short store_flags[3];
extern short current_active_pc;

extern sf::RenderWindow mainPtr;
extern rectangle d_rects[80];
extern short d_rect_index[80];

extern bool current_file_has_maps;
bool choice_active[6];

extern short which_pc_displayed;
cPlayer *store_pc;
sf::Texture button_num_gworld;

extern std::map<eSkill,short> skill_cost;
extern std::map<eSkill,short> skill_max;
extern std::map<eSkill,short> skill_g_cost;

