/*Napisz program znajdujący wszystkie możliwości złożenia 100zł z nominałów 2, 5 oraz 10 zł.
Należy wypisać liczbę możliwych kombinacji.*/
#include <stdio.h>

int main(void){
    int result=0, nr10, nr5;
    for(nr10=0; nr10<=10; nr10++)
        for(nr5=0; nr5<=(100-10*nr10)/5; nr5+=2){
            result++;
            //printf("%2d. %2d x 10zl, %3d x 5zl, %3d x 2zl\n", result, nr10, nr5, (100-10*nr10-5*nr5)/2);
    }
    printf("Total amount of combinations: %d.\n", result);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
