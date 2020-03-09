#include <stdio.h>

/*  ULOHA
    Vypocitajte na zaklade aktualnej a zelanej vahy dlzku 
    treningoveho procesu a casovy horizont (mesiace, roky ) 
    na jej ziskanie.
    Pocitajte, ze na jednom treningu schudnete 700g.
*/

int main() {
    // aby sme boli presnejsi pouzijeme typ 'float'
    float aktualna_vaha;
    float vysledna_vaha;
    float pocet_mesiacov;
    float pocet_rokov;
    int pocet_treningov = 0;

    // ziskame vstupy pre aktualnu vahu
    // a vyslednu vahu
    printf("Zadajte aktualnu vahu [kg]\n");
    scanf("%f", &aktualna_vaha);
    printf("Zadajte vyslednu vahu [kg]\n");
    scanf("%f", &vysledna_vaha);

    // DEBUG: vypis pri programovani
    // %.2f znamena vypis 'float' cisla na dve desatinne miesta
    //printf("Aktualna vaha: %.2f, vysledna vaha: %.2f\n", aktualna_vaha, vysledna_vaha);

    // pouzijeme napr. cyklus 'for', kde zacneme na
    // aktualnej vahe a budeme postupne odratavat 0.7kg
    // x-=0.7 ~ x = x - 0.7
    // po kazdom treningu. Pocet treningov kazdym opakovanim
    // zvysujeme '++'
    for ( float x = aktualna_vaha; x > vysledna_vaha; x -= 0.7, pocet_treningov++ ) {
        // DEBUG: vypis pri programovani
        //printf("Po %d treningu vasa vaha je %f\n", pocet_treningov, i);
    }

    printf("Vyslednu vahu dosiahnete za %d treningov. ",pocet_treningov);
    pocet_mesiacov = pocet_treningov/4;

    printf("Bude vam to trvat aspon %.2f mesiacov. ",pocet_mesiacov);
    pocet_rokov = pocet_mesiacov/12;

    printf("Co predstavuje asi %.2f roku\n", pocet_rokov);
    printf("Drzime Vam palce!\n");

    return 0;
}