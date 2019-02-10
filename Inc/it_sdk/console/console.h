/* ==========================================================
 * console.h - debug & config console
 * Project : Disk91 SDK
 * ----------------------------------------------------------
 * Created on: 9 f�vr. 2019
 *     Author: Paul Pinault aka Disk91
 * ----------------------------------------------------------
 * Copyright (C) 2019 Disk91
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU LESSER General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * ----------------------------------------------------------
 * 
 *
 * ==========================================================
 */

#ifndef IT_SDK_CONSOLE_CONSOLE_H_
#define IT_SDK_CONSOLE_CONSOLE_H_

#include <it_sdk/config.h>
#if ITSDK_WITH_CONSOLE == __ENABLE

#if ITSDK_CONSOLE_LINEBUFFER > 127
#error "ITSDK_CONSOLE_LINEBUFFER is too large, pBuffer is limited to 7 bits."
#endif

typedef struct {
	uint8_t		loginState:1;								// 0 when the console is locked / 1 when the console is unlocked
	uint8_t		pBuffer:7;									// pointer in the Reception buffer
	uint8_t		serialBuffer[ITSDK_CONSOLE_LINEBUFFER];		// Reception buffer
	uint32_t	expire;										// expiration time in S



} itsdk_console_state_t;

// ==============================================================================
// API
// ==============================================================================
void itsdk_console_loop();

#endif // ITSDK_WITH_CONSOLE
#endif /* IT_SDK_CONSOLE_CONSOLE_H_ */