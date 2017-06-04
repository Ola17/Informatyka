/*Napisz program rysujący "choinkę" jak poniżej (kropki oznaczają spacje).
.....*
....***
...*****
..*******
.*********
***********
Wykorzystaj funkcję putchar z biblioteki stdio, która ma deklarację: int putchar(int znak);
Przykład jej użycia: putchar('*');
Liczba poziomów powinna być pobierana z klawiatury. Pierwsza gwiadka w ostatnim rzędzie
powinna znaleźć się w pierwszej kolumnie wiersza konsoli (stykać się z ramką).  */
#include <stdio.h>

int main(void){
    int i, row, nr;
    printf("\nHow many rows? ");
    scanf("%d", &nr);
    for(row=0; row<nr; row++){
        for(i=0; i<nr-row-1; i++)
            putchar(' ');
        for(i=0; i<2*row+1; i++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
