#include <stdio.h>

/*  ULOHA
    Vypocitajte vek uchadzaca o vodicsky preukaz na zaklade 
    datumu narodenia a vyhodnotte, ci si ho moze spravit.
*/

int main() {
    int rok_narodenia;
    int aktualny_rok = 2020;
    int vek;

    // vzdy je dobre informovat uzivatela
    // ako ma vstup zadat
    printf("Zadajte vas rok narodenia [YYYY]\n");
    scanf("%d", &rok_narodenia);

    // vypocitame vek a ulozime ho do pripravenej premennej 'vek'
    vek = aktualny_rok - rok_narodenia;
    printf ("Narodili ste sa v roku %d, vas vek je %d\n", rok_narodenia, vek);

    // Podmienka
    // ak je vek 17 a viac rokov
    if ( vek>=17 ) {
        printf("OK  Mozete si spravit VP\n");
    // inak 
    } else {
        printf("NOK Este nemate dostatocny vek na VP\n");
    }
    
    // navratova hodnota v pripade uspesneho
    // ukoncenia programu je 0
    return 0;
}