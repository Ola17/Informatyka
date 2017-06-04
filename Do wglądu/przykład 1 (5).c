/*Napisz program, który wczyta znak (z alfabetu angielskiego) z klawiatury i wypisze na ekran znak następny, według alfabetu.  */
#include <stdio.h>

int main(void){
    char ch;
    printf("\nEnter your character: ");
    scanf("%c", &ch);
    (ch!='z' && ch!='Z')?printf("Next character: %c", ++ch):printf("You've reached the end of the alphabet.");
    //W przypadku wprowadzenia litery z program wyświetla komunikat o osiągnięciu końca alfabetu. W pozostałych sytuacjach podaje znak następny.
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
