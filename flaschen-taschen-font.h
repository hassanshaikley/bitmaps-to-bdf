// -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil; -*-
// Copyright (C) 2016 Hassan Shaikley <hassan.shaikley@gmail.com> and Milo <IDKTBH>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation version 2.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://gnu.org/licenses/gpl-2.0.txt>

//
// flaschen taschen starter font
// just the fonts, mister.
//
#include <stdint.h>
#include <stdio.h>
void write_character_data(FILE *f, int ascii, int glyph_number);

uint8_t glyph[][5] ={
    // Space
    {	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
    },
    // !
    {	0b00001100,
	0b00001100,
	0b00001100,
	0b00000000,
	0b00001100,
    },
    // "
    {	0b00001010,
	0b00001010,
	0b00001010,
	0b00000000,
	0b00000000,
    },
    // #
    {	0b00001010,
	0b00011111,
	0b00001010,
	0b00011111,
	0b00001010,
    },
    // $ yuck need artist
    {	0b00001110,
	0b00010100,
	0b00001110,
	0b00000101,
	0b00001110,
    },
    // %
    {	0b00011001,
	0b00011010,
	0b00000100,
	0b00001011,
	0b00010011,
    },
    // &
    {	0b00001100,
	0b00010010,
	0b00001101,
	0b00010010,
	0b00001101,
    },
    // ' 0x27  single quote
    {	0b00000010,
	0b00000010,
	0b00000010,
	0b00000000,
	0b00000000,
    },
    // (
    {	0b00000110,
	0b00001000,
	0b00001000,
	0b00001000,
	0b00000110,
    },
    // )
    {	0b00001100,
	0b00000010,
	0b00000010,
	0b00000010,
	0b00001100,
    },
    // * 0x2a asterisk
    {	0b00000000,
	0b00010101,
	0b00001110,
	0b00010101,
	0b00000000,
    },
    // + 0x2b plus
    {	0b00000100,
	0b00000100,
	0b00011111,
	0b00000100,
	0b00000100,
    },
    // , 0x2c comma
    {	0b00000000,
	0b00000000,
	0b00000100,
	0b00000100,
	0b00001000,
    },
    // - 0x2d hyphen
    {	0b00000000,
	0b00000000,
	0b00011111,
	0b00000000,
	0b00000000,
    },
    // . 0x2e period, dot or full stop
    {	0b00000000,
	0b00000000,
	0b00000000,
	0b00000110,
	0b00000110,
    },
    // / 0x2f slash or divide
    {	0b00000001,
	0b00000010,
	0b00000100,
	0b00001000,
	0b00010000,
    },
    // 0
    {	0b00001110,
	0b00010011,
	0b00010101,
	0b00011001,
	0b00001110,
    },
    // 1
    {	0b00000100,
	0b00001100,
	0b00000100,
	0b00000100,
	0b00001110,
    },
    // 2
    {	0b00001100,
	0b00010010,
	0b00000100,
	0b00001000,
	0b00011110,
    },
    // 3
    {	0b00011100,
	0b00000110,
	0b00001100,
	0b00000110,
	0b00011100,
    },
    // 4
    {	0b00010000,
	0b00010010,
	0b00011111,
	0b00000010,
	0b00000010,
    },
    // 5
    {	0b00011110,
	0b00010000,
	0b00011100,
	0b00000110,
	0b00011100,
    },
    // 6
    {	0b00001100,
	0b00010000,
	0b00011100,
	0b00010010,
	0b00001100,
    },
    // 7
    {	0b00011110,
	0b00000010,
	0b00000100,
	0b00001000,
	0b00010000,
    },
    // 8
    {	0b00001100,
	0b00010010,
	0b00001110,
	0b00010001,
	0b00001110,
    },
    // 9
    {	0b00001110,
	0b00010001,
	0b00001111,
	0b00000001,
	0b00001110,
    },
    // : -- Hassan
    {	0b00000000,
	0b00001100,
	0b00000000,
	0b00001100,
	0b00000000,
    },
    // ; -- Hassan
    {	0b00000000,
	0b00001100,
	0b00000000,
	0b00001100,
	0b00001000,
    },
    // < -- Hassan
    {	0b00000011,
	0b00000110,
	0b00011000,
	0b00001100,
	0b00000011,
    },
    // = 0x3d equals
    {	0b00000000,
	0b00001110,
	0b00000000,
	0b00001110,
	0b00000000,
    },
    // > -- Hassan
    {	0b000011000,
	0b00000110,
	0b000000011,
	0b000001100,
	0b000011000,
    },
    // ? -- Hassan
    {	0b00001110,
	0b00000011,
	0b00000110,
	0b00000000,
	0b00001100,
    },
    // @ 0x40 at symbol
    {	0b00001110,
	0b00010110,
	0b00010101,
	0b00010101,
	0b00001110,
    },
    // A 0x41 A
    {	0b00001100,
	0b00010010,
	0b00011110,
	0b00010010,
	0b00010010,
    },
    // B
    {	0b00011100,
	0b00010010,
	0b00011100,
	0b00010010,
	0b00011100,
    },
    // C
    {	0b00001110,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00001110,
    },
    // D
    {	0b00011100,
	0b00010010,
	0b00010010,
	0b00010010,
	0b00011100,
    },
    // E
    {	0b00001110,
	0b00010000,
	0b00011110,
	0b00010000,
	0b00001110,
    },
    // F
    {	0b00001110,
	0b00010000,
	0b00011110,
	0b00010000,
	0b00010000,
    },
    // G
    {	0b00001100,
	0b00010000,
	0b00010110,
	0b00010010,
	0b00001100,
    },
    // H
    {	0b00010010,
	0b00010010,
	0b00011110,
	0b00010010,
	0b00010010,
    },
    // I
    {	0b00001110,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00001110,
    },
    // J
    {	0b00000010,
	0b00000010,
	0b00000010,
	0b00010010,
	0b00001100,
    },
    // K
    {	0b00010010,
	0b00010100,
	0b00011000,
	0b00010100,
	0b00010010,
    },
    // L
    {	0b00010000,
	0b00010000,
	0b00010000,
	0b00010000,
	0b00011110,
    },
    // M
    {	0b00010001,
	0b00011011,
	0b00011111,
	0b00010101,
	0b00010001,
    },
    // N
    {	0b00010010,
	0b00011010,
	0b00010110,
	0b00010010,
	0b00010010,
    },
    // O
    {	0b00001100,
	0b00010010,
	0b00010010,
	0b00010010,
	0b00001100,
    },
    // P
    {	0b00011100,
	0b00010010,
	0b00011100,
	0b00010000,
	0b00010000,
    },
    // Q
    {	0b00001110,
	0b00010001,
	0b00010101,
	0b00010010,
	0b00001101,
    },
    // R
    {	0b00011100,
	0b00010010,
	0b00011100,
	0b00010100,
	0b00010010,
    },
    // S
    {	0b00001110,
	0b00010000,
	0b00011100,
	0b00000010,
	0b00011100,
    },
    // T
    {	0b00011110,
	0b00000100,
	0b00000100,
	0b00000100,
	0b00000100,
    },
    // U
    {	0b00010010,
	0b00010010,
	0b00010010,
	0b00010010,
	0b00001100,
    },
    // V
    {	0b00010001,
	0b00010001,
	0b00001010,
	0b00001010,
	0b00000100,
    },
    // W
    {	0b00010001,
	0b00010001,
	0b00010101,
	0b00010101,
	0b00001010,
    },
    // X
    {	0b00010001,
	0b00001010,
	0b00000100,
	0b00001010,
	0b00010001,
    },
    // Y
    {	0b00010001,
	0b00001010,
	0b00000100,
	0b00000100,
	0b00000100,
    },
    // Z 0x5a
    {	0b00011111,
	0b00000010,
	0b00000100,
	0b00010000,
	0b00011111,
    },
    // [
    {	0b00001111,
	0b00001100,
	0b00001100,
	0b00001100,
	0b00001111,
    },
    // \ lol needs text to not flip out
    {	0b00110000,
	0b00011000,
	0b00001100,
	0b00000110,
	0b00000011,
    },
    // ]
    {	0b00001111,
	0b00000011,
	0b00000011,
	0b00000011,
	0b00001111,
    },
    // ^ 0x5e caret - circumflex
    {	0b00000100,
	0b00001010,
	0b00010001,
	0b00000000,
	0b00000000,
    },
    // _ 0x5f underscore
    {	0b00000000,
	0b00000000,
	0b00000000,
	0b00000000,
	0b00011111,
    },
    // `
    {	0b00001100,
	0b00000010,
	0b00000000,
	0b00000000,
	0b00000000,
    },
    // {
    {	0b00000011,
	0b00000010,
	0b00001100,
	0b00000010,
	0b00000011,
    },
    // |
    {	0b00000110,
	0b00000110,
	0b00000110,
	0b00000110,
	0b00000110,
    },
    // }
    {	0b00001100,
	0b00000100,
	0b00000011,
	0b00000100,
	0b00001100,
    },
    // ~
    {	0b00000000,
	0b00011000,
	0b00101010,
	0b00001100,
	0b00000000,
    },
};
