/* Zadania 4:
 
 Program wyznaczający silnię wczytanej ze strumienia wejściowego liczby "n" metodą rekurencyjną oraz iteracyjną na zmiennych typu unsigned int */


/*===============================================================================================================================================================
================================================================================================================================================================*/


#include<stdio.h>

unsigned silnia_i1(unsigned n);
unsigned silnia_r1(unsigned n);


int main()
{
    unsigned n;
    
    printf("\nProgram wyznaczający n! metodą rekurencyjną.\nPodaj n:\t");
    scanf("%u",&n);
    printf("\n%u! = %u\n\n",n,silnia_r1(n));
    
    
    printf("\nProgram wyznaczający n! metodą iteracyjną.\nPodaj n:\t");
    scanf("%u",&n);
    printf("\n%u! = %u\n\n",n,silnia_i1(n));
    
    
    return 0;
}

unsigned silnia_r1(unsigned n)    // wyznaczenie n! metodą rekurencyjną
{
    if(n>1)
       return silnia_r1(n-1)*n;
    else
        return 1;
    
}

unsigned silnia_i1(unsigned n)   // wyznaczenie n! metodą iteracyjną
{
    unsigned i, resoult=1;
    
    for(i=1; i<=n; i++)
        resoult = i*resoult;
        
    
    
    return resoult; 
}

