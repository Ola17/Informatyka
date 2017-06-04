/*Napisz program wypisujący podaną dodatnią dwucyfrową liczbę całkowitą w postaci binarnej
"od tyłu" na 8-miu bitach (np. liczbę 4 jako 00100000).  */
#include <stdio.h>

int main(void){
    unsigned int i, x;
    printf("\nx = ");
    scanf("%u", &x);
    for(i=0; i<8; i++){
        printf("%u", x%2);
        x /= 2;
    }
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
