# Polia / Arrays

- predstavuju suvisly blok rovnakych prvkov v pamati

## Zapis premennej 

```c
    int a[5]; # bez inicializacie
    int a[5] = { 10, 20, 30, 40, 50 }; # 
    int a[5] = {}; # priradi hodnotu nula
```

| Premenna | a[0] | a[1] | a[2] | a[3] | a[4] |
| -------- | ---- | ---- | ---- | ---- | ---- |
| Hodnota  | 1350567744 | 32582 | 1350567328 | 32582 | -405283472   |
| Hodnota  | 10   | 20   | 30   | 40   | 50   |
| Hodnota  | 0    | 0    | 0    | 0    | 0    |

- pole **piatich** prvkov
- prvy nemusia byt zotriedene
- **prvy prvok** ma index `0`
- **posledny prvok** ma index `n-1` ( 4, v priklade vyssie )
  - a[5] je chyba, tato adresa nebola urcena pre nas program
- hodnota prvkov zavisi od inicializacie, resp. neskorsom priradeni hodnoty

## Pouzitie

- pouzivaju sa, aby sme nemuseli deklarovat vela premennych rovnakeho typu

```c
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d", &a );
    scanf("%d", &b );
    scanf("%d", &c );
    scanf("%d", &d );
    scanf("%d", &e );
    scanf("%d", &f );
    scanf("%d", &g );
    scanf("%d", &h );
    scanf("%d", &i );
    scanf("%d", &j );

    // cez pole to je easy
    int arr[10];
    for( int i = 0; i < 10; i++ ) {
        scanf("%d", &arr[i]);
    }
```
- vhodne su ak potrebujeme vyhodnocovat kriteria nad nejakou skupinou dat rovnakeho typu

## Operacie s polom

- pre citane alebo zapis hodnot z/do pola sa pouziva zvycanie cyklus `for`
- riadiaca premenna napr. ``i`` nam sluzi ako adresa pola
- vzdy najlpsie **zacinat od 0 az po mensie ako n**

### Zmena hodnoty prvku pola

```c
    int a[5] = { 1, 2, 3, 4, 5 };

    a[3] = 8;
    // { 1, 2, 3, 8, 5 };

    a[0] = 9;
    // { 9, 2, 3, 8, 5 };

    for( int i = 0; i < 5; i++ ) { 
        a[i] *= 2;
    }
    // { 18, 4, 6, 16, 10 };
```
### Zamena hodnot

- treba vzdy pouzit docasnu premennu
- napr. chcem zamenit 3 a 5 prvok, teda a[2] a a[4]
```c
    int a[5] = { 1, 2, 3, 4, 5 };

    int tmp = a[2];
    a[2] = a[4];
    a[4] = tmp;
    // { 1, 2, 5, 4, 3 };
```

### Nacitavanie do pola

```c
    int a[5];

    for( int i = 0; i < 5; i++ ) { 
        scanf("%d", &a[i]);
    }
``` 

### Vypis pola

```c
    int a[5] = { 1, 2, 3, 4, 5 };

    // odpredu
    for( int i = 0; i < 5; i++ ) { 
        printf("%d ", a[i]);
    }

    // odzadu; POZOR zaciname od n-1
    for( int i = 5 - 1 ; i > 0; i-- ) { 
        printf("%d ", a[i]); 
    }
``` 

### Porovnavanie s hodnotou

- vacsinou sa daco porovnava, resp. zistuje ci sa dany prvok nachadza v poli
- priklad pre najdenie parnych cisel ( delitelnych 2 bez zvysku )

```c
    int a[5] = { 1, 2, 3, 4, 5 };
    int pocet = 0;

    for( int i = 0; i < 5; i++ ) { 
        if( a[i] % 2 == 0 ) {
            pocet++;
        }
    }
    printf("Pocet cisel je: %d\n", pocet);
``` 

### Porovnanie dvoch poli

- polia nemusia byt rovnako velke
- pouzijeme vnorene cykly
- mozeme hladat:
  - prienik
  - pripadne odlisnosti, tu to musime prejst 2x

```c
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[8] = { 3, 1, 1, 2, 9, 6, 1, -8 };

    // pozeram prvky A
    for (int i = 0; i < 5; i++ ) {
        int pocet = 0;
        // oproti prvkom B
        for (int j = 0; j < 8; j++ ) {
            if( a[i] == b[j] ) {
                pocet++;
            }            
        }
        if( pocet > 0 ) {
            printf("%d sa v poli B nachadza %d krat\n", a[i], pocet);
        }
        
    }

    // pozeram prvky A
    for (int i = 0; i < 5; i++ ) {
        int exist = 0;
        // ktore nie su v poli B
        for (int j = 0; j < 8; j++ ) {
            if( a[i] == b[j] ) {
                exist = 1;
            }            
        }        
        if( exist == 0 ) {
            printf("%d nie je v poli B\n", a[i]);
        }
    }

    // pozeram prvky B
    for (int i = 0; i < 8; i++ ) {
        int exist = 0;
        // ktore nie su v poli A
        for (int j = 0; j < 5; j++ ) {
            if( b[i] == a[j] ) {
                exist = 1;
            }            
        }        
        if( exist == 0 ) {
            printf("%d nie je v poli A\n", b[i]);
        }
    }
```

### Agregacne funkcie

- napriklad sucet, priemer, minimum, maximum

```c
    int a[5] = { 6, 2, 44, 11, 122 };
    float priemer = 0;
    int sum = 0;
    int pocet = 0;
    int min = a[0], max = a[0];

    for( int i = 0; i < 5; i++ ) { 
        sum += a[i];
        if( min < a[i] ) {
            min = a[i];
        }
        if( max > a[i] ) {
            max = a[i];
        }
        pocet++;
    }

    printf("Spolu:   %d\n", sum);
    printf("Priemer: %.2f\n", (float) sum / pocet );
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
``` 

## Velkost pola

- velkost pola sa da chapat dvomi sposobmi
  - kolko ma prvkov
  - kolko zabera pamete
- jazyk C je dost orientovany na pamat, preto prikaz `sizeof` vracia velkost pamate
- neskor bude treba ratat s rozsirovanim pola

```c
    int a[5] = { 1, 2, 3, 4, 5 };

    printf("%lu\n", sizeof a );                 // 20 bajtov
    printf("%lu\n", sizeof a[0] );              // 4 bajty
    printf("%lu\n", sizeof a / sizeof a[0] );   // 20 % 4 = 5
    
    printf("%lu\n", sizeof(char));              // 1 B
    printf("%lu\n", sizeof(int));               // 4 B
    printf("%lu\n", sizeof(float));             // 4 B
    printf("%lu\n", sizeof(double));            // 8 B
```

## Dvoj a viac rozmerne polia

## Dynamicke polia