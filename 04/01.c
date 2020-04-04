#include <stdio.h>

int main() {
    int a, b;
    float p;    // podiel
    int c;      // celociselny podiel
    int m;      // zvysok
    printf("Zadaj prvé celé číslo: ");
    scanf("%d", &a );
    printf("Zadaj druhé celé číslo: ");
    scanf("%d", &b );

    if( b == 0 ) {
        printf("ERROR: nulou sa neda delit\n");
    } else {
        p = (float) a / (float) b;  // musia sa pretypovat, aby bol vysledok float
        printf("Podiel čísel je: %.2f\n", p);
        c = a / b;
        printf("Celočíselný podiel čísel je: %d\n", c);
        m = a % b;
        printf("Zvyšok po delení je: %d\n", m);
    }

    return 0;
}