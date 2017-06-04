/*Napisz prosty kalkulator z czterema działaniami (+, -, *, /). Należy wykorzystać instrukcję switch.
Operatory powinny być wprowadzane PRZED liczbami w postaci znaków (+, -, *, /) np. + 5 7.  */
#include <stdio.h>

int main(void){
    char ch;
    double x, y, ans;
    printf("\nEnter your equation (e.g. : \"+ 5 7\"): ");
    scanf("%c %lf %lf", &ch, &x, &y);
    switch (ch){
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            if (y!=0){
                ans = x / y;
            } else {
                printf("Cannot divide by zero!\n");
                return -1;
            }
            break;
    }
    printf("%.2lf %c %.2lf = %.2lf\n", x, ch, y, ans);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
