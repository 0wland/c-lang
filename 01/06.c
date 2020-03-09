#include <stdio.h>

/*  ULOHA
    Nakresli stvorec ( pomocou znaku '#' )
    Velkost sa nacita zo vstupu.
*/

int main() {
    int velkost;

    // zistime velkost stvorca
    printf("Zadajte velkost stvorca: ");
    scanf ("%d", &velkost);
    
    // stvorec sa bude skladat s riadkov a stlpcov
    // prvy cyklus urcuje riadky
    for (int y = 0; y < velkost; ++y) {
        // druhy cyklus bude po stlpcoch vypisovat znak
        for (int x = 0; x < velkost; ++x) {
            printf("#");
        }
        // na konci riadka skocime na novy
        printf("\n");
    }
    return 0;
}