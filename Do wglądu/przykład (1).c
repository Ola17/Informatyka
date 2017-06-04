/*Napisz makrodefinicję
#define abs(A) ... Zwraca wartość bezwzględną liczby A
Sprawdzić działanie makra wywołując kod
printf("%d", abs(1-2)); Powinno wypisać 1 */
#include <stdio.h>
#define abs(A) (((A)>=0)?(A):(-(A)))

int main(void){
    printf("%d", abs(1-2));
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
