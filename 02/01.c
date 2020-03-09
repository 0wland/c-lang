#include <stdio.h>
/*  ak potrebujeme generovat nahodne cisla
    je treba include dalsie kniznice
*/
#include <stdlib.h>
#include <time.h>

/*  ULOHA
    Vypiste 10 nahodnych cisel medzi 10 a 20
*/

int main() {
    // definovanie generatora nahodnych cisel
    srand(time(0));

    // cyklus pre 10 opakovani
    for (int i = 0; i < 10; ++i) {
        // vyuzijeme vlastnost operatora %
        // ktory vracia zvysok po deleni
        
        // 11 je preto, aby vracal cisla 0-10
        // +10 je preto aby to bolo posunute 10-20
        
        // pozor na prioritu operatorov!
        
        // ak nepracuje z vysledkom dalej
        // nemusime ho ukladat do premennej
        printf("%d\n", ( rand() % 11 ) + 10 );
    }

    return 0;
}