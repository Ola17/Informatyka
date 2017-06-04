/*Napisz program sumujący 7 liczb wpisywanych z klawiatury. W zadaniu należy wykorzystać pętlę for.   */
#include <stdio.h>

int main(void){
    int i;
    double nr, result=0;
    for(i=0; i<7; i++){
        printf("%d. ",i+1);
        scanf("%lf", &nr);
        result += nr;
    }
    printf("Your result is: %lf", result);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
