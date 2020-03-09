#include <stdio.h>

/*  ULOHA
    Vo vstupnom subore zistite pocet vyskytov
    znakov 'V', '9', 'X', 'u'
*/

int main() {
    // otvorenie suboru
    FILE *fh;
    fh = fopen("09.txt","r");
    
    // kontrola, ci sa podarilo otvorit subor
    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        // navratova hodnota v pripade NEuspesneho
        // ukoncenia programu ina ako 0
        return -1;
    }

    // premenna pre nacitanie znaku
    int znak;
    // pomocne premenne pre pocitanie
    int a, b, c, d;
    a = b = c = d = 0;

    // citanie zo suboru
    do {
        // kontrola, ci sme na konci suboru
        if( feof(fh) ) {
            // break sluzi na ukoncenie cyklu
            break;
        }
        
        znak = fgetc(fh);
        // DEBUG: vypis pri programovani
        //printf("%c\n", znak);
      
        // rozhodovanie na zaklade znaku
        switch(znak) {
            // ak je to 'V' tak zvysim ++
            case 'V': 
                a++; 
                break;
            case '9': 
                b++; 
                break;
            case 'X': 
                c++; 
                break;
            case 'u': 
                d++; 
                break;
        }
    } while(1);

    // Vypis vysledkov hladania
    printf("Pocet znakov V je %3d\n", a);
    printf("Pocet znakov 9 je %3d\n", b);
    printf("Pocet znakov X je %3d\n", c);
    printf("Pocet znakov u je %3d\n", d);

    // ak subor raz otvorime, musime ho uzavriet
    fclose(fh);

    return 0;
}