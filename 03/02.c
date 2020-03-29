#include <stdio.h>

int main() {
    int i;
    for( i = 1; i <= 100; i++ ) {
        printf("%d, ", i );
    }
    printf("\n");
    for( i = 100; i >= 1; i-- ) {
        printf("%d, ", i );
    }

    return 0;
}