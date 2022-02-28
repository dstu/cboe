/*
 *  restypes.h
 *  BoE
 *
 *  Created by Celtic Minstrel on 10-08-25.
 *
 */

#ifndef BOE_RES_CURSOR_HPP
#define BOE_RES_CURSOR_HPP

#include "src/fileio/resmgr/cursors.hpp"
#include "src/fileio/resmgr/resmgr.hpp"

using CursorRsrc = ResMgr::cPointer<Cursor>;

namespace ResMgr {
	extern cPool<Cursor> cursors;
}

#endif
