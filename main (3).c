#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sonuc;
    char can[15]="abcdef";
    char canan[15]="ABCDEF";

    sonuc=strncmp(can,canan,4);



    if(sonuc<0)
    {
        printf("Can Canan dan daha kucuktur");
    }
    else if(sonuc >0)
    {
        printf("Can Canan dan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }

   return(0);
}
