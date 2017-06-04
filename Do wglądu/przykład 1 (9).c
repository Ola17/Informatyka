/*Napisz program obliczający pole koła na postawie promienia. Program ma pobierać promień od
użytkownika "z klawiatury". W obliczeniach proszę użyć zmiennych rzeczywistych.  */
#include <stdio.h>
#include <math.h>

int main(void){
    double radius;
    printf("\nr = ");
    scanf("%lf", &radius);
    printf("Area = %lf\n", M_PI*radius*radius);
    return 0;
}

//Musimy dolaczyc biblioteke matematyczna w gcc za pomocą -lm:
//gcc 4.c -o 4 -lm

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
