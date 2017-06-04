/*Napisz program wypełniający tablicę 20-to elementową liczbami losowymi wygenerowanymi z przedziału MIN, MAX, gdzie
MIN i MAX są makrodefinicjami. Następnie program powinien wypisać średnią z wygenerowanych liczb.
 #include <stdlib.h>
 void srand(unsigned int seed); Inicjalizacja generatora
 int rand(void); Wygenerowanie liczby pseudolosowej z zakresu 0 a RAND_MAX
 srand(20);  Inicjalizacja generatora liczb pseudolosowych wartością 20
 int i = rand();  */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 10
#define MAX 100

int main(void){
    int i, sum=0, table[20];
    srand(time(NULL));
    for(i=0; i<20; i++){
        table[i]=(rand() % (MAX - MIN + 1)) + MIN;
        sum += table[i];
    }
    printf("\nAverage = %.2lf\n",sum/20.);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
