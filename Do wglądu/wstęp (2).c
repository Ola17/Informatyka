/*Dane jest równanie y = 2x^3 - 3x^2 + 4x - 5. Napisz program wyliczający (i wypisujący) wartość y dla x wczytanego z klawiatury.
W programie należy zastosować maksymalnie 8 operacji arytmetycznych (dodawanie, odejmowanie, mnożenie). y i x są liczbami rzeczywistymi. */
#include <stdio.h>

int main(void){
    double x;
    printf("\nx = ");
    scanf("%lf", &x);
    //2x^3-3x^2+4x-5=x(x(2x+3)+4)-5
    printf("y = %.2lf\n",x*(x*(2*x-3)+4)-5);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
