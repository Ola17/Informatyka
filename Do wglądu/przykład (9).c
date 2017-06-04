/*Napisz program wybierający najmniejszą liczbę z 10 wpisanych z klawiatury.  */
#include <stdio.h>

int main(void){
    int i;
    double nr, min;
    for(i=0; i<10; i++){
        printf("%2d. ", i+1);
        scanf("%lf", &nr);
        if(i==0 || nr<min)
            min=nr;
    }
    printf("Minimum = %lf\n", min);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
