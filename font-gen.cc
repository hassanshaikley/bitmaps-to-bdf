// .bdf font generator
// generates font data from the bitmaps in flaschen-taschen-font.h

#include "flaschen-taschen-font.h"

int main(int argc, char *argv[]) {

  FILE *f = stdout;

  for(int incr=0; incr < sizeof(glyph)/sizeof(*glyph);++incr){
    
    if (incr + ' ' >= 65) { // may need to add less than as well  (97(a) -33(!) = 64)
      fprintf(f, "STARTCHAR %c\n", ( incr+' '+32));
      fprintf(f, "ENCODING %d\n", ( incr+' '+32));
      fprintf(f, "SWIDTH 540 0\n");
      fprintf(f, "DWIDTH 5 0\n");
      fprintf(f, "BBX 5 5 0 -1\n");
      fprintf(f, "BITMAP\n");
      for (int i = 0; i < 5 ; i ++){
	fprintf(f, "%02x\n", glyph[incr][i] << 3);
      }
      fprintf(f, "ENDCHAR\n");
    } 
    fprintf(f, "STARTCHAR %c\n", ( incr+' '));
    fprintf(f, "ENCODING %d\n", ( incr+' '));
    fprintf(f, "SWIDTH 540 0\n");
    fprintf(f, "DWIDTH 5 0\n");
    fprintf(f, "BBX 5 5 0 -1\n");
    fprintf(f, "BITMAP\n");
    for (int i = 0; i < 5 ; i ++){
      fprintf(f, "%02x\n", glyph[incr][i] << 3);
    }
    fprintf(f, "ENDCHAR\n");
  }
  fprintf(f, "ENDFONT\n");
  fclose(f);
}
