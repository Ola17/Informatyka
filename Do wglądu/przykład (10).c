/*Napisz program wypisujący tabliczkę mnożenia 10x10 w postaci tabelki (fragment poniżej, kropki oznaczają spacje):

...| .1 .2 .3 .4 .5 .6 .7 .8 .9 10
---------------------------------
.1 | .1 .2 .3 .4 .5 .6 .7 .8 .9 10
.2 | .2 .4 .6 .8 10 12 14 16 18 20
.3 | .3 .6 .9 12 15 18 21 24 27 30
itd.

Liczby powinny być w kolumnach z wyrównaniem do prawej. W wersji uproszczonej można pominąć "ozdobniki" (linie
oraz numery kolumn i wierszy).   */
#include <stdio.h>

int main(void){
    int row,col;
    printf("   |");
    for(col=0; col<10; col++)
        printf("%3d ",col+1);
    printf("\n---|");
    for(col=0; col<10; col++)
        printf("----",col+1);
    for(row=0; row<10; row++){
        printf("\n%2d |",row+1);
        for(col=0; col<10; col++)
            printf("%3d ",(col+1)*(row+1));
    }
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
