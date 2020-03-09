#include <stdio.h>

/*  ULOHA
    V slovencine je rozne sklonovanie slova EURO.
    Zabezpecte aby sa vzdy vypisala spravne,
    sustredte sa na tvari ak je hodnota 1, 2, 3, 4 a
    vyssia.
*/

int main() {
    int hodnota;

    // zistime vstup
    printf("Zadaj hodnotu penazi: ");
    scanf ("%d", &hodnota);

    // vypiseme spravne hodnotu penazi
    printf("Na bankovy ucet je potrebne zaplatit %d ", hodnota);
    switch(hodnota) {
        // ak je hodnota 1
        case 1: 
            printf("euro.\n");
            break;
        // ak je hodnota 2-4
        case 2: 
        case 3:
        case 4:
            printf("eurá.\n");
            break;
        // inak sa vypise nasledovne
        default:
            printf("eur.\n");
    }
    return 0;
}