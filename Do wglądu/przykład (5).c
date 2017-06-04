/*Napisz program wypisujący pierwiastki kwadratowe z liczb wczytywanych ze standardowego wejścia (klawiatury).
Program powinien działać w pętli, aż do podania liczby 0. W zadaniu należy wykorzystać pętlę do-while.
Do obliczania pierwiastka należy użyć funkcji sqrt z biblioteki matematycznej. W tym celu trzeba
w kodzie załączyć plik nagłówkowy #include <math.h> (funkcja sqrt ma tam deklarację: double sqrt(double x);),
oraz dołączyć bibliotekę matematyczną libm podczas linkowania programu (opcja -lm w poleceniu gcc). */
#include <stdio.h>
#include <math.h>

int main(void){
    double x;
    do {
        printf("\nx = ");
        scanf("%lf", &x);
        if(x<0){
            printf("Cannot take a root from a negative number.\n");
            continue;
        }
        printf("Square root = %lf\n",sqrt(x));
    } while (x!=0);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
