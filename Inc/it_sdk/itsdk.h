/* ==========================================================
 * itsdk.h - Common Headers
 * Project : Disk91 SDK
 * ----------------------------------------------------------
 * Created on: 2 sept. 2018
 *     Author: Paul Pinault aka Disk91
 * ----------------------------------------------------------
 * Copyright (C) 2018 Disk91
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

#ifndef IT_SDK_ITSDK_H_
#define IT_SDK_ITSDK_H_

#include <stdbool.h>
#include <stdint.h>
#include <it_sdk/config.h>
#include <it_sdk/wrappers.h>

// ------------------------------------------------------------------------
// Function every project needs to implement
void project_setup();
void project_loop();

// ------------------------------------------------------------------------
// SDK Public Interface
void itsdk_setup();
void itsdk_loop();
void itsdk_restart();

// Deprecated !!! DO NOT USE
// replaced by ITSDK_ERROR_REPORT
//void itsdk_error_handler(char * file, int line);

// ------------------------------------------------------------------------
// Tool.c
uint32_t calculateCRC32(const uint8_t *data, uint16_t length);
char itdt_convertHalfInt2HexChar(uint8_t v,bool upper);
void itdt_convertInt2HexChar(uint8_t v, char * dest, bool upper);
void itdt_convertIntTab2Hex(char * dest, uint8_t * tab, int len, bool upper);
bool itdt_isHexChar(char c, bool upper);
bool itdt_isHexString(char * str,int n,bool upper);
uint8_t itdt_convertHexChar2HalfInt(char c);
uint8_t itdt_convertHexChar2Int(char * v);
uint32_t itdt_convertHexChar8Int(char * v);
uint16_t itdt_convertHexChar4Int(char * v);
int16_t itdt_convertDecChar4Int(char * v);
void itdt_convertHexStr2IntTab(char * hexstr,uint8_t * tab, int len);
void itdt_macToString(char * str, uint8_t * mac);
uint32_t itdt_align_32b(uint32_t v);
uint8_t itdt_count_bits_1(uint32_t v);

#endif /* IT_SDK_ITSDK_H_ */
