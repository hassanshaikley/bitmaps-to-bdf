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

//  system("cp header.txt 5x5.bdf");


  //FILE *f = fopen("5x5.bdf", "w");
  FILE *f = stdout;
  //  fprintf(f, "%02x", 32);

  for(int incr=0; incr < sizeof(glyph)/sizeof(*glyph);++incr){
    fprintf(f, "STARTCHAR %c\n", ( incr+'!'));
    fprintf(f, "ENCODING %d\n", ( incr+'!'));
    fprintf(f, "SWIDTH 540 0\n");
    fprintf(f, "DWIDTH 5 0\n");
    fprintf(f, "DWIDTH BBX 5 5 0 -1\n");
    fprintf(f, "BITMAP\n");
    for (int i = 0; i < 5 ; i ++){
      fprintf(f, "%02x\n", glyph[incr][i]);

    }
    /*
    //convert first 4 bits to hex, and second 4 bits to hex, then print.. continue for all 5 rows 
    //glyph[incr] to hex
    system(("echo '" + std::to_string(glyph[incr][0]) + "' >>5x5.bdf").c_str()); 
     */
    fprintf(f, "ENDCHAR\n");
  }
  //system("echo 'ENDFONT' >>5x5.bdf" );
  fprintf(f, "ENDFONT\n");
  fclose(f);
}
