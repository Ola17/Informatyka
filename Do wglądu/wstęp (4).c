/*Napisz program zamieniający miejscami wartości zmiennych całkowitych x oraz y wczytanych z klawiatury.
Należy wczytać liczby, wyświetlić je, zamienić wartości i wyswietlić ponownie.   */
#include <stdio.h>

int main(void){
    int x, y, tmp;
    printf("\nx = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("x = %d, y = %d\n",x,y);
    tmp=x;
    x=y;
    y=tmp;
    printf("x = %d, y = %d\n",x,y);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
