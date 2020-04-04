#include <stdio.h>

int main() {
    FILE *fh;
    fh = fopen("vyraz.txt","r");
    
    if( fh == NULL ) {
        printf("ERROR: Subor sa neda otvorit!\n");
        return -1;
    }

    int znak;
    int z, p, m, k, d, s;
    z = p = m = k = d = s = 0;

    do {
        znak = fgetc(fh);
        switch(znak) {
            case '(': 
                z++; 
                break;
            case ')': 
                z--; 
                break;
            case '+': 
                p++; 
                break;
            case '-': 
                m++; 
                break;
            case '*': 
                k++; 
                break;
            case '/': 
                d++; 
                break;
        }
        s++;
    } while( znak != EOF );
    
    fclose(fh);
    
    if( z == 0 ) {
        printf("Pocet zátvoriek je rovnaký\n");
    } else {
        printf("Pocet zátvoriek NIE je rovnaký\n");
    }
    
    printf("Pocet znakov + je %3d\n", p);
    printf("Pocet znakov - je %3d\n", m);
    printf("Pocet znakov * je %3d\n", k);
    printf("Pocet znakov / je %3d\n", d);

    printf("Celkovy pocet znakov je %3d\n", --s);    

    return 0;
}