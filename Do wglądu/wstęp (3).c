/*Wyświetl znak wpisany z klawiatury oraz odpowiadający mu kod ASCII.   */
#include <stdio.h>

int main(void){
    char ch;
    printf("\nEnter your character: ");
    scanf("%c", &ch);
    printf("Your character: %c\nASCII code: %d\n", ch, ch);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
