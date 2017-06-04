/*Napisz program przeliczający podawaną z klawiatury liczbę sekund na zapis godziny:minuty:sekundy.   */
#include <stdio.h>

int main(void){
    int time;
    printf("\nEnter your time (seconds): ");
    scanf("%d",&time);
    printf("%02d:%02d:%02d",time/3600,(time%3600)/60,time%60);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
