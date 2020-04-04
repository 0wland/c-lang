#include <stdio.h>

void stvorec( int velkost ) {
    for (int y = 0; y < velkost; ++y) {
        for (int x = 0; x < velkost; ++x) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int velkost;

    printf("Zadajte velkost stvorca: ");
    scanf ("%d", &velkost);
    stvorec( velkost );

    return 0;
}