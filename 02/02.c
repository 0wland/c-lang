#include <stdio.h>

/*  DEKLARACIA FUNKCII
    Je dobre ich definovat na zaciatku, aby sa vedeli 
    pouzit v main.
    Main sa potom zvykne pisat ako prva
    funkcia rovno pod deklaracie. 
*/
int plus( int a, int b);
int minus( int a, int b);
int krat( int a, int b);
int deleno( int a, int b);

int main() {
    // otvorenie suboru
    FILE *fh;
    fh = fopen("02.txt","r");

    // kontrola, ci sa podarilo otvorit subor
    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        // navratova hodnota v pripade NEuspesneho
        // ukoncenia programu ina ako 0
        return -1;
    }

    // citanie zo suboru
    do {
        // kontrola, ci sme na konci suboru
        if( feof(fh) ) {
            // break sluzi na ukoncenie cyklu
            break;
        }
        
        // definovanie premennych
        int a, b, z;
        // nacitanie hodnot do premennych
        // pozor na format!
        fscanf(fh, "%lc %d %d\n", &z, &a, &b);

        // rozhodovanie na zaklade znamienka
        switch(z) {
            // definovanie podmienky pre scitavanie
            case '+':
                printf("%d %c %d = %d\n", a, z, b, plus(a,b) );
                // vzdy v kazdom case musi byt na konci break
                break;
            case '-':
                printf("%d %c %d = %d\n", a, z, b, minus(a,b) );
                break;
            case '*':
                printf("%d %c %d = %d\n", a, z, b, krat(a,b) );
                break;
            case '/':
                printf("%d %c %d = %d\n", a, z, b, deleno(a,b) );
                break;
        }
    // takyto cyklus sa vola nekonecny
    // musi mat podmienku, ktora ho ukonci (break)
    // nie je moc dobre ho pouzivat
    } while(1);

    // ak subor raz otvorime, musime ho uzavriet
    fclose(fh);

    // navratova hodnota v pripade uspesneho
    // ukoncenia programu je 0
    return 0;
}

/*  FUNKCIE, ktore sme uz deklarovali vyssie
    - NAVRATOVA HODNOTA je typu 'int'
      moze byt aj void = nevraciame hodnotu
    - NAZOV FUNKCIE je 'plus'
    - VSTUPNE PARAMETRE su 'a' a 'b', 
      vzdy treba uviest ich typ
    - v TELE FUNKCIE {...} uvedieme, co sa ma
      vykonat
*/
int plus( int a, int b) {
    return a + b;
}

int minus( int a, int b) {
    return a - b;
}

int krat( int a, int b) {
    return a * b;
}

int deleno( int a, int b) {
    return a / b;
}