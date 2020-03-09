#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ULOHA
   Vyrobte generator vstupu pre ulohu c.09.
   Pocet znakov by mal byt 900, su povolene iba
   znaky a-z, A-Z, 0-9.
   TIP: Pozrite si ASCII tabulku
   http://www.asciitable.com/
*/

int main() {
   // otvorenie suboru
   FILE *fh;
   fh = fopen("09.txt","w");

   // kontrola, ci sa podarilo otvorit subor
    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        // navratova hodnota v pripade NEuspesneho
        // ukoncenia programu ina ako 0
        return -1;
   }
   
   // definovanie generatora nahodnych cisel
   srand(time(0));

   // staci mi 300 opakovani, v kazdom vygenerujem 
   // jedno cislo, male a velke pismeno
   for (int i = 0; i < 300; i++) {
      // Cisla zacinaju na 48 v ASCII tabulke
      int znak = ( rand() % (58-48)) + 48;
      fputc( znak, fh );
      // Velke pismena zacinaju na 65 v ASCII tabulke
      znak = ( rand() % (91-65)) + 65;
      fputc( znak, fh );
      // Male pismena zacinaju na 97 v ASCII tabulke
      znak = ( rand() % (123-97)) + 97;
      fputc( znak, fh );
   }

   // ak subor raz otvorime, musime ho uzavriet
   fclose(fh);
    
   return 0;
}