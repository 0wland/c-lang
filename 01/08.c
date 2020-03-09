#include <stdio.h>
/*  ak potrebujeme generovat nahodne cisla
    je treba include dalsie kniznice
*/
#include <stdlib.h>
#include <time.h>

/*  ULOHA
    Vytvorte hraciu kartu na hru BINGO.
    Karta ma velkost 5x5 policok a obsahuje
    nahodne cisla od 0 po 99.
    Vystup programu by mal byt subor s hracou
    kartou.
*/

int main() {
    // otvorenie suboru na zapis
    FILE *fh;
    fh = fopen("08.txt", "w");

    // kontrola, ci sa podarilo otvorit subor
    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        // navratova hodnota v pripade NEuspesneho
        // ukoncenia programu ina ako 0
        return -1;
    }

    // definovanie generatora nahodnych cisel
    srand(time(0));

    // Potrebujeme 25 cisel pre hraciu kartu 5x5
    for (int i = 0; i < 25; ++i) {
        // aby bola karta 5x5, musime dat novy riadok
        // po kazdom piatom cisle
        // 0%5 je nula, preto pridana podmienka i != 0
        if( ( i%5 ) == 0 && i != 0 ) {
            fprintf(fh, "\n");
        }

        // formatovany zapis do suboru
        // %3d znamena, ze cislo bude zarovnane vpravo
        fprintf(fh, "%3d ", rand() % 100 );
    }

    // ak subor raz otvorime, musime ho uzavriet
    fclose(fh);

    return 0;
}