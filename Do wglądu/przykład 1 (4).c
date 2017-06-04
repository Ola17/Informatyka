/*Napisz program sumujący kwadraty 10 kolejnych liczb naturalnych (od 1 do 10). W zadaniu należy wykorzystać pętlę while.  */
#include <stdio.h>

int main(void){
    int i=1, result=0;
    while(i<=10){
        result += (i*i);
        i++;
    }
    printf("Your result is: %d", result);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
