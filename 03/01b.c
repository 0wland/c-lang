#include <stdio.h>

int main() {
   FILE *fh;
   fh = fopen("cisla.txt","r");

    if ( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        return -1;
    }
   
    int x;
    int parne = 0;
    int vacsie = 0;
    int sucet = 0;
    float pocet = 0; 
    // ak by boli obe premenne ( sucet, pocet ) int, delenie by bolo celociselne
    // preto pocet je typu float

    do {
        if ( feof(fh) ) {
            break;
        }
        
        fscanf(fh, "%d\n", &x);

        // parne = delitelne 2
        if ( ( x % 2 ) == 0) {
            parne++;
        }

        // vacsie ako 25
        if ( x > 25 ) {
            vacsie++;
        }
        // sucet
        sucet += x;
        // pocet pre priemer
        pocet++;
    } while(1);

   fclose(fh);

   // vypis ulohy
   printf("V subore cisla.txt je:\n");
   printf("  %d parnych cisel\n", parne);
   printf("  %d cisel je vacsich ako 25\n", vacsie);
   printf("  Sucet cisel je %d\n", sucet);
   printf("  Priemer cisel je %.2f\n", sucet / pocet);
    
   return 0;
}