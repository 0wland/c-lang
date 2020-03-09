#include <stdio.h>

/*  ULOHA
    Zo zadaneho intervalu cisel najdite vsetky
    cisla, ktore su delitelne 4.
*/

int main() {
    int a, b, zaciatok, koniec;

    // nacitame vstupy do pomocnych premennych
    printf("Zadajte zaciatok intervalu cisel: ");
    scanf("%d", &a);
    printf("Koniec intervalu: ");
    scanf("%d", &b);
    printf("Cisla delitelne 4: ");

    // ak by to zadal niekto opacne
    // zacneme od mensieho cisla
    if( a < b ) {
        zaciatok = a;
        koniec = b;
    } else {
        zaciatok = b;
        koniec = a;
    }

    // cyklus od 'zaciatku' po 'koniec'
    for(int x = zaciatok; x <= koniec; x++) {
        // operator '%' vracia zvysok po deleni
        int zvysok = x % 4;
        // ak je zvysok nula, tak cislo je delitelne
        // bezo zvysku
        if ( zvysok == 0) {
            printf("%d ", x);
        }
    }

    // iba ukoncenie riadku
    printf("\n");

    return 0;
}