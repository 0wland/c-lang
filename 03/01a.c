#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fh;
    fh = fopen("cisla.txt","w");

    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        return -1;
    }
   
    srand(time(0));

    for (int i = 0; i < 20; i++) {
        fprintf(fh, "%d\n", rand() % 50);
    }

    fclose(fh);
    
    return 0;
}