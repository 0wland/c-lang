#include <stdio.h>

int main() {
    int n = 0;
    printf("Zadajte pocet prvkov pola [max. 50]: ");
    scanf("%d", &n);

    if(n < 0 || n > 50) {
        printf("ERROR: Pole moze mat najviac 50 prvkov!\n");
        return -1;
    }

    printf("Zadajte %d krat hodnotu: \n", n);
    int a[50];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    FILE *fh;
    fh = fopen("cisla.txt","w");

    if ( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        return -1;
    }

    printf("Zadali ste nasledujuce cisla: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
        fprintf(fh, "%d ", a[i]);
    }
    fclose(fh);

    printf("\n");

    int x = 1;
    printf("Zadajte cislo, ktoreho delitelnost chcete zistit: ");
    scanf("%d", &x);

    int max = a[0];
    int pocet = 0;

    printf("Cisla delitelne %d: ", x);
    for (int i = 0; i < n; i++) {
        if( a[i] % x == 0 ) {
            pocet++;
            printf("%d ", a[i] );
            if( max < a[i] ) {
                max = a[i];
            }
        }
    }
    printf("\nPocet cisel delitelnych cislom %d je %d: ", x, pocet);
    printf("\nNajvacie z nich je %d: ", max);
    printf("\n");

    return 0;
}