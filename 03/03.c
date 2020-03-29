#include <stdio.h>

int main() {
    int x, y;

    // ziskame vstupy pre X a Y
    printf("Zadajte X\n");
    scanf("%d", &x);
    printf("Zadajte Y\n");
    scanf("%d", &y);

    if( x < y ) {
        for( x; x <= y; x++ ) {
            printf("%d, ", x );
        }
    } else {
        for( x; x >= y; x-- ) {
            printf("%d, ", x );
        }
    }    

    return 0;
}