// -*- mode: c++; c-basic-offset: 4; indent-tabs-mode: nil; -*-
// Copyright (C) 2016 Hassan Shaikley <hassan.shaikley@gmail.com>
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

// .bdf font generator
// generates font data from the bitmaps in flaschen-taschen-font.h

#include "flaschen-taschen-font.h"

const char START_CHAR=' ';

int main(int argc, char *argv[]) {

  FILE *f = stdout;

  for(int incr=0; incr < sizeof(glyph)/sizeof(*glyph);++incr){

    // Uses same glyphs for lowercase as it does for upper
    if (incr + START_CHAR >= 'A' && incr + START_CHAR <= 'Z') { 
      write_character_data(f, incr + START_CHAR + 32, incr); // +32 for lowercase; 
    }
    write_character_data(f, incr + START_CHAR, incr); 
  }

  fprintf(f, "ENDFONT\n");
  fclose(f);
}

void write_character_data(FILE *f, int ascii, int glyph_number){
  fprintf(f, "STARTCHAR %c\n", (ascii));
  fprintf(f, "ENCODING %d\n", (ascii));
  fprintf(f, "SWIDTH 540 0\n");
  fprintf(f, "DWIDTH 5 0\n");
  fprintf(f, "BBX 5 5 0 -1\n");
  fprintf(f, "BITMAP\n");

  for (int i = 0; i < 5 ; i ++){
    fprintf(f, "%02x\n", glyph[glyph_number][i] << 3);
  }

  fprintf(f, "ENDCHAR\n");
}
