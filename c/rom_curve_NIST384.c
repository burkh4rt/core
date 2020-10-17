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
#include "ecp_NIST384.h"

/* Curve NIST384 */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

const int CURVE_Cof_I_NIST384= 1;
const BIG_384_29 CURVE_Cof_NIST384= {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I_NIST384= 0;
const BIG_384_29 CURVE_B_NIST384= {0x13EC2AEF,0x142E476E,0xBB4674A,0xC731B14,0x1875AC65,0x447A809,0x4480C50,0xDDFD028,0x19181D9C,0x1F1FC168,0x623815A,0x47DCFC9,0x1312FA7E,0x59};
const BIG_384_29 CURVE_Order_NIST384= {0xCC52973,0x760CB56,0xC29DEBB,0x141B6491,0x12DDF581,0x6C0FA1B,0x1FFF1D8D,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0x7F};
const BIG_384_29 CURVE_Gx_NIST384= {0x12760AB7,0x12A2F1C3,0x154A5B0E,0x5E4BB7E,0x2A38550,0xF0412A,0xE6167DD,0xC5174F3,0x146E1D3B,0x1799056B,0x3AC71C7,0x1D160A6F,0x87CA22B,0x55};
const BIG_384_29 CURVE_Gy_NIST384= {0x10EA0E5F,0x1218EBE4,0x1FA0675E,0x1639C3A,0xB8C00A6,0x1889DAF8,0x11F3A768,0x17A51342,0x9F8F41D,0x1C9496E1,0x1767A62F,0xC4C58DE,0x17DE4A9,0x1B};
const BIG_384_29 CURVE_HTPC_NIST384= {0xDCD21B,0x1213626A,0x1502B4CF,0x85A550E,0x5FEED05,0x13578422,0xED2F57D,0x16A06E8C,0x2E00897,0x1652C3E0,0x12F5A8FF,0x6E2A490,0x6EF0F22,0x5E};
#endif

#if CHUNK==64

const int CURVE_Cof_I_NIST384= 1;
const BIG_384_56 CURVE_Cof_NIST384= {0x1L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const int CURVE_B_I_NIST384= 0;
const BIG_384_56 CURVE_B_NIST384= {0x85C8EDD3EC2AEFL,0x398D8A2ED19D2AL,0x8F5013875AC656L,0xFE814112031408L,0xF82D19181D9C6EL,0xE7E4988E056BE3L,0xB3312FA7E23EL};
const BIG_384_56 CURVE_Order_NIST384= {0xEC196ACCC52973L,0xDB248B0A77AECL,0x81F4372DDF581AL,0xFFFFFFFFC7634DL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFL};
const BIG_384_56 CURVE_Gx_NIST384= {0x545E3872760AB7L,0xF25DBF55296C3AL,0xE082542A385502L,0x8BA79B9859F741L,0x20AD746E1D3B62L,0x5378EB1C71EF3L,0xAA87CA22BE8BL};
const BIG_384_56 CURVE_Gy_NIST384= {0x431D7C90EA0E5FL,0xB1CE1D7E819D7AL,0x13B5F0B8C00A60L,0x289A147CE9DA31L,0x92DC29F8F41DBDL,0x2C6F5D9E98BF92L,0x3617DE4A9626L};
const BIG_384_56 CURVE_HTPC_NIST384= {0x426C4D40DCD21BL,0x2D2A87540AD33EL,0xAF08445FEED054L,0x37463B4BD5F66L,0x587C02E00897B5L,0x52484BD6A3FECAL,0xBC6EF0F22371L};
#endif


