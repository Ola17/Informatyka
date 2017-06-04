/* Zadanie 3.2
 * Program wyznaczający pierwiastki równania kwadratowego ax^2+bx+c = 0 na podstawie wczytanych ze strumienia wejściowego współczynników "a", "b", "c"
 * Program wykorzystuje funkcję pomocniczą void rkwad(double,double, double)

*/

#include<stdio.h>
#include<math.h>
#include"ncurses.h"



void rkwad(double a,double b, double c)
{
     double x1,x2,x0, delta ;

    if (delta=b*b-4*a*c>0.0)
    {
        x1=-(-b-sqrt(delta))/2/a ;

        x2=-(-b+sqrt(delta))/2/a ;

        printf("\n\x1b[35m Powyższe rónanie kwadratowe ma dwa pierwiastki rzeczywiste : \x1b[32m \nx1=%lf\nx2=%lf \n",x1,x2);
    }

   else if(delta ==0)
    {
        x0=-b/2/a;
        printf("\n\x1b[35m Powyższe rónanie kwadratowe ma jeden pierwiastek rzeczywisty: \x1b[32m x0=%lf\n ",x0);
    }

    else
        printf("\n\x1b[35m Powyższe rónanie kwadratowe nie ma pierwiastków rzeczywistych\n");



    return ;
}

int main()
{
    double a,b,c;
    char decide='t';

    while(decide!='n')
    {

        printf("\033[2J\n\r");

    printf("\x1b[35m Podaj współczynniki \x1b[32m a\x1b[35m ,\x1b[32m b\x1b[35m, \x1b[32m c \x1b[35m równania \x1b[32m a x^2 + b x + c = 0\n\x1b[32mWspółczynnik a:\t");
    scanf("%lf",&a);
    printf("\nWspółczynnik b:\t");
    scanf("%lf",&b);
    printf("\nWspółczynnik c:\t");
    scanf("%lf",&c);

if (a==0)

    {
     printf(" \x1b[32m podane równanie   \x1b[35m %lf x + %lf = 0 \x1b[32m nie jest funkcją kwadratową!\n \x1b[0m  ",b,c);

    }

else
{
    printf(" \x1b[32m %lf x^2 + %lf x + %f \n\x1b[0m  ",a,b,c);
    rkwad(a,b,c) ;
}

        printf("\n\x1b[35m Czy chcesz kontynuować ?[t/n] :\n");
        scanf("%s",&decide);
    }
          printf("\x1b[35m \nKoniec \n\n");

    return 0;
}
