/* Napisz program, który wczytuje liczbę całkowitą ze standardowego wejścia, a następnie zamienia ją na napis.
Należy pamiętać o zachowaniu znaku liczby w napisie. Liczba ma mieć maksymalnie 5 cyfr.
Należy pamiętać o znaku końca tekstu. Wynikowy tekst należy wypisać funkcją puts().*/
#include <stdio.h>
#include <string.h>
#define SIZE 512

int main(void){
    int nr, tmp;
    char text[SIZE]="";
    char *string;
    printf("\nNumber = ");
    scanf("%d", &nr);
    if (nr>=100000 || nr<=-100000){
        printf("Your number is too long!\n");
        return -1;
    }

    //Znak
    if(nr>=0){
        if(nr==0)
            string = "zero";
        else
            string = "";
    } else {
        string = "minus ";
        nr = -nr;
    }
    strcat(text, string);
    string="";

    //Tysiące
    tmp=nr/1000;
    if (tmp>=20){
        switch (tmp/10){
            case 2: string = "dwadzieścia "; break;
            case 3: string = "trzydzieści "; break;
            case 4: string = "czterdzieści "; break;
            case 5: string = "pięćdziesiąt "; break;
            case 6: string = "sześćdziesiąt "; break;
            case 7: string = "siedemdziesiąt "; break;
            case 8: string = "osiemdziesiąt "; break;
            case 9: string = "dziewięćdziesiąt "; break;
        }
        strcat(text, string);
        string="";
        switch (tmp%10){
            case 0: string = ""; break;
            case 1: string = "jeden "; break;
            case 2: string = "dwa "; break;
            case 3: string = "trzy "; break;
            case 4: string = "cztery "; break;
            case 5: string = "pięć "; break;
            case 6: string = "sześć "; break;
            case 7: string = "siedem "; break;
            case 8: string = "osiem "; break;
            case 9: string = "dziewięć "; break;
        }
        strcat(text, string);
        string="";
        if(tmp%10 == 2 || tmp%10 == 3 || tmp%10 == 4)
            string = "tysiące ";
        else
            string = "tysięcy ";
        strcat(text, string);
        string="";
    } else if (tmp >= 10 && tmp <= 19){
        switch (tmp%10){
            case 0: string = "dziesięć"; break;
            case 1: string = "jedenaśnie "; break;
            case 2: string = "dwanaście "; break;
            case 3: string = "trzynaście "; break;
            case 4: string = "czternaście "; break;
            case 5: string = "piętnaście "; break;
            case 6: string = "szesnaście "; break;
            case 7: string = "siedemnaście "; break;
            case 8: string = "osiemnaście "; break;
            case 9: string = "dziewiętnaście "; break;
        }
        strcat(text, string);
        string="tysięcy ";
        strcat(text, string);
        string="";
    } else if (tmp <=9){
        switch (tmp%10){
            case 0: string = ""; break;
            case 1: string = "tysiąc "; break;
            case 2: string = "dwa "; break;
            case 3: string = "trzy "; break;
            case 4: string = "cztery "; break;
            case 5: string = "pięć "; break;
            case 6: string = "sześć "; break;
            case 7: string = "siedem "; break;
            case 8: string = "osiem "; break;
            case 9: string = "dziewięć "; break;
        }
        strcat(text, string);
        string="";
        if(tmp%10 != 1 && tmp%10 != 0)
            if(tmp%10 == 2 || tmp%10 == 3 || tmp%10 == 4)
                string = "tysiące ";
            else
                string = "tysięcy ";
        strcat(text, string);
        string="";
    }
    //Setki
    tmp=(nr/100)%10;
    switch (tmp){
        case 0: string = ""; break;
        case 1: string = "sto "; break;
        case 2: string = "dwieście "; break;
        case 3: string = "trzysta "; break;
        case 4: string = "czterysta "; break;
        case 5: string = "pięćset "; break;
        case 6: string = "sześćset "; break;
        case 7: string = "siedemset "; break;
        case 8: string = "osiemset "; break;
        case 9: string = "dziewięćset "; break;
    }
    strcat(text, string);
    string="";
    //Dziesiątki i jedności
    tmp=nr%100;
    if (tmp>=20){
        switch (tmp/10){
            case 2: string = "dwadzieścia "; break;
            case 3: string = "trzydzieści "; break;
            case 4: string = "czterdzieści "; break;
            case 5: string = "pięćdziesiąt "; break;
            case 6: string = "sześćdziesiąt "; break;
            case 7: string = "siedemdziesiąt "; break;
            case 8: string = "osiemdziesiąt "; break;
            case 9: string = "dziewięćdziesiąt "; break;
        }
        strcat(text, string);
        string="";
        switch (tmp%10){
            case 0: string = ""; break;
            case 1: string = "jeden "; break;
            case 2: string = "dwa "; break;
            case 3: string = "trzy "; break;
            case 4: string = "cztery "; break;
            case 5: string = "pięć "; break;
            case 6: string = "sześć "; break;
            case 7: string = "siedem "; break;
            case 8: string = "osiem "; break;
            case 9: string = "dziewięć "; break;
        }
        strcat(text, string);
        string="";
    } else if (tmp >= 10 && tmp <= 19){
        switch (tmp%10){
            case 0: string = "dziesięć"; break;
            case 1: string = "jedenaśnie "; break;
            case 2: string = "dwanaście "; break;
            case 3: string = "trzynaście "; break;
            case 4: string = "czternaście "; break;
            case 5: string = "piętnaście "; break;
            case 6: string = "szesnaście "; break;
            case 7: string = "siedemnaście "; break;
            case 8: string = "osiemnaście "; break;
            case 9: string = "dziewiętnaście "; break;
        }
        strcat(text, string);
        string="";
    } else if (tmp <=9){
        switch (tmp%10){
            case 0: string = ""; break;
            case 1: string = "jeden "; break;
            case 2: string = "dwa "; break;
            case 3: string = "trzy "; break;
            case 4: string = "cztery "; break;
            case 5: string = "pięć "; break;
            case 6: string = "sześć "; break;
            case 7: string = "siedem "; break;
            case 8: string = "osiem "; break;
            case 9: string = "dziewięć "; break;
        }
        strcat(text, string);
        string="";
    }

    puts(text);
    return 0;
}

//(C) F.B., Krakow 2015
//Do kopiowania i udostępniania.
