/*
 *  porting.h
 *  BoE
 *
 *  Created by Celtic Minstrel on 22/04/09.
 *
 */

#ifndef SRC_PORTING_H
#define SRC_PORTING_H

#include <cstdint>

#include "src/location.hpp"
#include "src/oldstructs.hpp"

void flip_long(int32_t *s);
void flip_spec_node(legacy::special_node_type *spec);
void flip_short(int16_t *s);
void flip_rect(legacy::Rect* s);

void port_t_d(legacy::big_tr_type* old);
void port_ave_t(legacy::ave_tr_type* old);
void port_tiny_t(legacy::tiny_tr_type* old);
void port_scenario(legacy::scenario_data_type* old);
void port_item_list(legacy::scen_item_data_type* old);
void port_out(legacy::outdoor_record_type* out);
void port_talk_nodes(legacy::talking_record_type* dummy_talk_ptr);
void port_town(legacy::town_record_type* dummy_town_ptr);
void port_party(legacy::party_record_type* old);
void port_pc(legacy::pc_record_type* old);
void port_c_town(legacy::current_town_type* old);

#endif  // SRC_PORTING_H
