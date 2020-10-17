/*
 * Copyright (c) 2012-2020 MIRACL UK Ltd.
 *
 * This file is part of MIRACL Core
 * (see https://github.com/miracl/core).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "arch.h"
#include "ecp_BN462.h"

namespace BN462 {
/* Curve BN462 - Pairing friendly BN curve */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

using namespace B464_28;

//*** rom curve parameters *****
// Base Bits= 28
// Ate Bits= 118
// G2 Table size= 125

const int CURVE_Cof_I= 1;
const BIG CURVE_Cof= {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I= 5;
const BIG CURVE_B= {0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG CURVE_Order= {0x10800D,0x1B007E,0x24,0xF7C0000,0xC7BF717,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404};
const BIG CURVE_Gx= {0x6B6980D,0x98D91F3,0xD70113C,0x372E5C,0xE79239C,0x416A0B1,0xBB4E69A,0x689DB1B,0x3CF4B2E,0xB3EDBEC,0x6F95F63,0xAC9264B,0x30160B9,0xBA34A0A,0x191FAD,0xD67EF25,0x21A6};
const BIG CURVE_Gy= {0x6FB03DE,0xA5734D3,0x22ECAA8,0xC666006,0xF475432,0xE40EB80,0xDF11B8A,0x6E6AF77,0x5965042,0x7D788C6,0x42CCCFA,0x90EEDA8,0xA7432A4,0x2B33676,0x7F7ABB8,0xEA0460F,0x118};
const BIG CURVE_HTPC= {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG CURVE_Bnx= {0xFFFBFFF,0xFFFFFFF,0xFFFFFFF,0x1FFFF,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};

const BIG CURVE_Pxa= {0xAE1E4DF,0x8E3D934,0x769546,0x6A8B488,0xAE1F0AA,0x92E0032,0x2699BAD,0x208F9AD,0x3820408,0xED61C91,0x7C1CD96,0x2E0337E,0xCBDC548,0xB38E3A8,0x8DDA0DF,0xCCC85B5,0x257};
const BIG CURVE_Pxb= {0xA8CD283,0x108BA6A,0x50E9B73,0x59BF7E8,0xF50AF8B,0xB783718,0x6BAE555,0x8134DD8,0x84058B1,0xED91768,0x54730CB,0xC98E2A3,0x9566BA3,0x8EDCA84,0x99102AF,0x4343E85,0x1D2E};
const BIG CURVE_Pya= {0xDB7154E,0x5B68DF0,0x7C3376E,0xE7B11D,0x3695A14,0xDAE32E0,0x1F41C9D,0xF1399A,0xB42FE81,0x3FA7A6B,0x706E23C,0xA035634,0x20809EC,0x517427A,0x22C1979,0x50439DA,0xA06};
const BIG CURVE_Pyb= {0xCA2A93A,0x14CC552,0x93B9EBA,0xD537434,0x387AA68,0xA04EF87,0x7692444,0x725CC64,0xAB370FD,0x7B393F1,0xC69AC5,0x44D5E6B,0x306324D,0x2C8AE37,0x8CBE017,0xF0CBD43,0x73E};
const BIG CURVE_W[2]= {{0x20003,0x6,0x0,0xFF00000,0xFF3FF7F,0xFFFFFFF,0xFFFFFFF,0x60017F,0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG CURVE_SB[2][2]= {{{0x28004,0x6,0x0,0xFEC0000,0xFF3FF77,0xFFFFFFF,0xFFFFFFF,0x60017F,0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x11000E,0x1B007E,0x24,0xF780000,0xC7BF70F,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404}},{{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x20003,0x6,0x0,0xFF00000,0xFF3FF7F,0xFFFFFFF,0xFFFFFFF,0x60017F,0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}}};
const BIG CURVE_WB[4]= {{0x4000,0x2,0x0,0xFFE0000,0xFFBFFDB,0xFFFFFFF,0xFFFFFFF,0x20007F,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFABFFB,0xFFCFFE3,0xFFFFFFF,0x29FFFF,0x800214,0x90,0x0,0xBFFF900,0xF6FF53F,0xFFFFFFF,0x5FFFFFF,0x4802400,0x300,0x0,0x0,0x0,0x0},{0xFFD3FFD,0xFFE7FF1,0xFFFFFFF,0x15FFFF,0x40010C,0x48,0x0,0xDFFFC80,0xFB7FA9F,0xFFFFFFF,0x2FFFFFF,0x2401200,0x180,0x0,0x0,0x0,0x0},{0xC001,0x2,0x0,0xFFA0000,0xFFBFFD3,0xFFFFFFF,0xFFFFFFF,0x20007F,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG CURVE_BB[4][4]= {{{0xFFFC000,0xFFFFFFF,0xFFFFFFF,0x1FFFF,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFFBFFF,0xFFFFFFF,0xFFFFFFF,0x1FFFF,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFFBFFF,0xFFFFFFF,0xFFFFFFF,0x1FFFF,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x11000F,0x1B007E,0x24,0xF780000,0xC7BF70F,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404}},{{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x10C00E,0x1B007E,0x24,0xF7A0000,0xC7BF713,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404},{0x10C00D,0x1B007E,0x24,0xF7A0000,0xC7BF713,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404},{0x10C00E,0x1B007E,0x24,0xF7A0000,0xC7BF713,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404}},{{0xFFF7FFE,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0xFFF7FFF,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x10C00F,0x1B007E,0x24,0xF7A0000,0xC7BF713,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404},{0x11800F,0x1B007E,0x24,0xF740000,0xC7BF707,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404},{0xFFF7FFD,0xFFFFFFF,0xFFFFFFF,0x3FFFF,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x10C00F,0x1B007E,0x24,0xF7A0000,0xC7BF713,0xF6FF66F,0xFFFFFFF,0xC201F7F,0x2908EE1,0xD81,0xA000000,0xB7D9BFC,0x6FF0CF6,0xFFFFFFF,0x23FFF,0x8036012,0x2404}}};

#endif

#if CHUNK==64

using namespace B464_60;

//*** rom curve parameters *****
// Base Bits= 60
// Ate Bits= 118
// G2 Table size= 125

const int CURVE_Cof_I= 1;
const BIG CURVE_Cof= {0x1L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const int CURVE_B_I= 5;
const BIG CURVE_B= {0x5L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG CURVE_Order= {0x401B007E010800DL,0x17F7C0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L};
const BIG CURVE_Gx= {0xC98D91F36B6980DL,0x9C0372E5CD70113L,0x69A416A0B1E7923L,0x4B2E689DB1BBB4EL,0x95F63B3EDBEC3CFL,0x160B9AC9264B6FL,0x191FADBA34A0A3L,0x21A6D67EF25L};
const BIG CURVE_Gy= {0x8A5734D36FB03DEL,0x32C66600622ECAAL,0xB8AE40EB80F4754L,0x50426E6AF77DF11L,0xCCCFA7D788C6596L,0x7432A490EEDA842L,0x7F7ABB82B33676AL,0x118EA0460FL};
const BIG CURVE_HTPC= {0x1L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};

const BIG CURVE_Bnx= {0xFFFFFFFFFFFBFFFL,0x4001FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG CURVE_Cru= {0x401F80A801A401AL,0xDBF2E0000000002L,0xFFFF6FF597BBBF3L,0x9F0222029FFFFFFL,0xD81368L,0xFF08764BD65FC10L,0x23FFFFFFFFFF6L,0x24048036012L};
const BIG CURVE_Pxa= {0x68E3D934AE1E4DFL,0xAA6A8B488076954L,0xBAD92E0032AE1F0L,0x408208F9AD2699L,0x1CD96ED61C91382L,0xBDC5482E0337E7CL,0x8DDA0DFB38E3A8CL,0x257CCC85B5L};
const BIG CURVE_Pxb= {0x3108BA6AA8CD283L,0x8B59BF7E850E9B7L,0x555B783718F50AFL,0x58B18134DD86BAEL,0x730CBED91768840L,0x566BA3C98E2A354L,0x99102AF8EDCA849L,0x1D2E4343E85L};
const BIG CURVE_Pya= {0xE5B68DF0DB7154EL,0x140E7B11D7C3376L,0xC9DDAE32E03695AL,0xFE810F1399A1F41L,0x6E23C3FA7A6BB42L,0x809ECA03563470L,0x22C1979517427A2L,0xA0650439DAL};
const BIG CURVE_Pyb= {0xA14CC552CA2A93AL,0x68D53743493B9EBL,0x444A04EF87387AAL,0x70FD725CC647692L,0x69AC57B393F1AB3L,0x6324D44D5E6B0CL,0x8CBE0172C8AE373L,0x73EF0CBD43L};
const BIG CURVE_W[2]= {{0x60020003L,0x7FFF00000000000L,0xFFFFFFFFFFFF3FFL,0x60060017FFFFFL,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}};
const BIG CURVE_SB[2][2]= {{{0x60028004L,0x77FEC0000000000L,0xFFFFFFFFFFFF3FFL,0x60060017FFFFFL,0x0L,0x0L,0x0L,0x0L},{0x401B007E011000EL,0xFF780000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L}},{{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x60020003L,0x7FFF00000000000L,0xFFFFFFFFFFFF3FFL,0x60060017FFFFFL,0x0L,0x0L,0x0L,0x0L}}};
const BIG CURVE_WB[4]= {{0x20004000L,0xDBFFE0000000000L,0xFFFFFFFFFFFFBFFL,0x20020007FFFFFL,0x0L,0x0L,0x0L,0x0L},{0xFFFCFFE3FFABFFBL,0x14029FFFFFFFFFFL,0x9008002L,0xF53FBFFF9000000L,0xFFFFFFFFFFFFF6FL,0x30048024005FL,0x0L,0x0L},{0xFFFE7FF1FFD3FFDL,0xC015FFFFFFFFFFL,0x4804001L,0xFA9FDFFFC800000L,0xFFFFFFFFFFFFFB7L,0x18024012002FL,0x0L,0x0L},{0x2000C001L,0xD3FFA0000000000L,0xFFFFFFFFFFFFBFFL,0x20020007FFFFFL,0x0L,0x0L,0x0L,0x0L}};
const BIG CURVE_BB[4][4]= {{{0xFFFFFFFFFFFC000L,0x4001FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFFBFFFL,0x4001FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFFBFFFL,0x4001FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x401B007E011000FL,0xFF780000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L}},{{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x401B007E010C00EL,0x13F7A0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L},{0x401B007E010C00DL,0x13F7A0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L},{0x401B007E010C00EL,0x13F7A0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L}},{{0xFFFFFFFFFFF7FFEL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0xFFFFFFFFFFF7FFFL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x401B007E010C00FL,0x13F7A0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L},{0x401B007E011800FL,0x7F740000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L},{0xFFFFFFFFFFF7FFDL,0x8003FFFFFFFFFFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x401B007E010C00FL,0x13F7A0000000002L,0xFFFF6FF66FC7BF7L,0x8EE1C201F7FFFFFL,0xD81290L,0xFF0CF6B7D9BFCA0L,0x23FFFFFFFFFF6L,0x24048036012L}}};

#endif

}
