/* Zadanie 5
 *Program wypisujący do strumienia wyjściowego kolejne liczby ciągu fibbonaci'ego wyznaczone metodą rekurencyjną oraz iteracyjną */


 /*===============================================================================================================================================================
================================================================================================================================================================*/



#include<stdio.h>

unsigned fibbonaci_r(unsigned);
unsigned fibbonaci_i(unsigned);
void fibbonaci_t(unsigned n, unsigned table[]);


int main()
{
   const unsigned maxSize = 200;
    unsigned n , resoult=0 ;

    unsigned table[maxSize] ;
    int key=0, i=0;

    printf("\n\nProgram wypisujący n pierwszych wyrazów ciągu Fibbonaci'ego. Podaj n:\t");
    scanf("%u",&n);


    printf("\n\nWybierz metodę:\n1) rekurencja\n2) iteracja\n3) tablice\nMetoda:\t");
    scanf("%d",&key);

    if(key == 3 && n>=maxSize)
    {
        printf("\nWrong n given\n\n");
        return 0;
    }
    switch(key)
    {
        case 1:
            resoult = fibbonaci_r(n);
            break;

        case 2:
            resoult = fibbonaci_i(n);
            break;

        case 3:
            fibbonaci_t(n, table) ;
                break;

        default:
            printf("Niepoprawny klucz.\n\n");
            break;


    }

    if(resoult)
        printf("\nF%u:\t%u\n",n,resoult);

   if(key==3)
   {
    for(i=0; i<=n; i++)
                printf(" \x1b[32m \nF%d:\t%u\n",i,table[i]);
   }

    printf("\n \x1b[0m ");

    return 0;
}

/*===============================================================================================================================================================
================================================================================================================================================================*/


void fibbonaci_t(unsigned n, unsigned table[])   // wyznaczenie n pierwszych wyrazów ciągu metodą iteracyjną . Zapisanie wyników w  postaci tablicy unsigned int;
{

    int i;

    table[0]=table[1]=1;


    if(n==0 )

        return ;

    if(n==1)

        return ;




    for(i=2; i<=n; i++)
        table[i]=table[i-1]+table[i-2] ;


   return ;

}


/*===============================================================================================================================================================
================================================================================================================================================================*/


unsigned fibbonaci_r(unsigned n) // wyznaczenie n-tego wyrazu ciągu metodą rekurencujną  // UWAGA! Czas trwania działąnia programu dla n>40 jest przeliczalnie długi!!!
{
    unsigned ans;

    if(n==0||n==1)  ans =1;


    else ans=fibbonaci_r(n-1)+fibbonaci_r(n-2);


    return ans;


}

/*===============================================================================================================================================================
================================================================================================================================================================*/


unsigned fibbonaci_i(unsigned n)    // wyznaczenie n -tego wyrazu ciągu metodą iteracyjną
{
    int i, n1=1,n2=1;

    if(n==0) return 1;


    if(n==1) return 1;


    for(i=2; i<=n; i++)
    {
        n1=n1+n2;
        n2=n1-n2;
    }


    return n1;
}
