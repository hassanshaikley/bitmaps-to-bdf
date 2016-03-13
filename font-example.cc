// 
// flaschen taschen string to font decoder 
// expand w/ info how to write and manipulate a font 
//

#include "flaschen-taschen-font.h"
#include <unistd.h>
#include <stdio.h>
#include <map> 
#include <string>

#define DISPLAY_WIDTH  40
#define DISPLAY_HEIGHT 40

int main(int argc, char *argv[]) {

  char a = '!';
  uint8_t * exclam = glyph[a - '!'];

  for(int incr=0; incr < sizeof(glyph)/sizeof(*glyph);++incr){


  /*  for(int y=0; y<5; y++){
      for(int x=0; x<5; x++){
	if((exclam[y]) & (1<<(4-x)) ){ // cmp glyph val & left shifted 1
	  canvas.SetPixel(x+5 , y+5, red);        //  fill sample with color variable.
	  printf("set a red pixel at (%d,%d)\n", x+10, y+10);  
	} else {
	  printf("didnt set a red pixel at (%d,%d)\n", x+10, y+10);  
	}
      }
    }*/
  }
}
