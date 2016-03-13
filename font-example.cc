// 
// flaschen taschen string to font decoder 
// expand w/ info how to write and manipulate a font 
//

#include "flaschen-taschen-font.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <map> 
#include <string>

#define DISPLAY_WIDTH  40
#define DISPLAY_HEIGHT 40

// Output file is 5x5.bdf
int main(int argc, char *argv[]) {

  char a = '!';
  uint8_t * exclam = glyph[a - '!'];

  system("cp header.txt 5x5.bdf");

  //FUcking up for ' lol
  for(int incr=0; incr < sizeof(glyph)/sizeof(*glyph);++incr){
    std::string STARTCHAR =  "STARTCHAR ";
    STARTCHAR += (incr+ '!');

    std::string call = "echo ";
    call+= STARTCHAR;
    call+= " >>5x5.bdf"; 
    system(("echo '"+ STARTCHAR + "' >>5x5.bdf" ).c_str());
    system(("echo 'ENCODING '"+ std::to_string(incr +'!') +" >>5x5.bdf" ).c_str());
    system(("echo 'ENCODING '"+ std::to_string(incr +'!') +" >>5x5.bdf" ).c_str());
    system("echo 'SWIDTH 540 0' >>5x5.bdf" );
    system("echo 'DWIDTH 5 0' >>5x5.bdf" );
    system("echo 'DWIDTH BBX 5 5 0 -1' >>5x5.bdf" );
    system("echo 'BITMAP' >>5x5.bdf" );
    /*
       BBX 4 6 0 -1
       BITMAP
       00
       00
       00
       00
       00
       00
     */
    system("echo 'ENDCHAR' >> 5x5.bdf");
  }
  system("echo 'ENDFONT' >>5x5.bdf" );
}
