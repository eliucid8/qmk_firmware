/*
Copyright 

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#undef VENDOR_ID
#undef PRODUCT_ID
#undef DEVICE_VER
#undef MANUFACTURER
#undef PRODUCT
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x4097
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Nobody"
#define PRODUCT         "IBM Wheelwriter"

#undef MATRIX_ROWS
#undef MATRIX_COLS
#define MATRIX_ROWS 8
#define MATRIX_COLS 14

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROW_PINS {"B5", "B6", "F7", "F6", "F5", "F4", "F1", "F0"}
#define MATRIX_COL_PINS {"B0", "B1", "B2", "B3", "B7", "D0", "D1", "D2", "D3", "C6", "C7", "D6", "D7", "B4"}