#include <stdio.h>

int main() {
    int a, b, c;
    int max;
    printf("Zadaj prvé číslo: ");
    scanf("%d", &a );
    printf("Zadaj druhé číslo: ");
    scanf("%d", &b );
    printf("Zadaj tretie číslo: ");
    scanf("%d", &c );

    if( a > b ) {
        max = a;
    } else {
        max = b;
    }

    if( c > max ) {
        max = c;
    }
    
    printf("Najväčšie číslo je: %d\n", max);

    return 0;
}