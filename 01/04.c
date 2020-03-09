#include <stdio.h>

/*  ULOHA
    Vypocitajte BMI koeficient na zaklade hmotnosti [kg]
    a vysky [m] podla vzorca. 

            hmotnost [kg]
    BMI = -----------------
            vyska² [m] 

    Urcite diagnozu podla tabulky:

    +-------------+--------------+
    | VAHA        | DIAGNOZA     |
    +-------------+--------------+
    |      < 16.5 | Podvyziva    |
    | 16.5 - 18.5 | Podvaha      |
    | 18.5 - 25.0 | Ideal        |
    | 25.0 - 30.0 | Nadvaha      |
    | 30.0 - 35.0 | Obezita I.   |
    | 35.0 - 40.0 | Obezita II.  |
    |      > 40.0 | Obezita III. |
    +-------------+--------------+
*/

int main() {
    // vsetky hodnoty musia byt presne, cize 'float'
    float hmotnost;
    float vyska;
    float bmi;

    // zitime vstupy
    printf("Zadajte vasu hmotnost [kg]:\n");
    scanf("%f", &hmotnost);
    printf("Zadajte vasu vysku [m]:\n");
    scanf("%f", &vyska);
    
    
    // vypocitame BMI podla vzorca
    // pozor na zatvorky!!!
    bmi = hmotnost/(vyska*vyska);
    
    // vypiseme BMI a pripravime popis pre diagnozu
    printf("Vase BMI je: %.2f\nDiagnoza: ", bmi);
    
    // prvy 'if' zisti podvyzivu ak
    // je splnena podmienka
    // v opacnom pripade je BMI vacsie
    // v sekcii 'else' teda vzdy prichadza ku dalsej
    // podmienke na ohranicenie zhora, napr. 16.5 - 18.5
    if (bmi < 16.5) {
        printf("Podvyziva\n");
    } else 
        if (bmi < 18.5) {
            printf("Podvaha\n");
        } else 
            if (bmi < 25) {
                printf("Ideal\n");
            } else 
                if (bmi < 30) {
                    printf("Nadvaha\n");
                } else 
                    if (bmi < 35) {
                        printf("Obezita I.\n");
                    } else 
                        if (bmi < 40) {
                            printf("Obezita II.\n");
                        } else {
                            printf("Obezita III.\n");
                        }

    return 0;
}