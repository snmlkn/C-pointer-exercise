#include <stdio.h>
#include <stdlib.h>

// KULLANICI TARAFIINDAN GÝRÝLEN KELÝMENÝN BAÞTAN VE SONDAN YAZIMININ AYNI OLUP OLMADIÐINI KONTROL EDEN PROGRAM(palendrome kontrolü)
int main()
{
    char word[100];//bir kaakter dizisi tanýmlanýr
    char *p1,*p2; //girilen kelimenin baþtan ve sondan adreslerini tutmak için iki pointer tanýmlanýr.
    int control;

    //kullanýcýdan cümle istenir
    printf("enter a word max 100 character\n");
    gets(word);
    //p2 yi dizinin son karakterinin adresine eþitleriz
    for(p2=word;*p2;p2++);//*p2 koþulu adresi '\0' karakterine gelene kadar devam ettirir
    p2--;//dizinin son karakterine geri gelmek için p2 bir eksiltilir.
    control=1;//control deðiþkeni 1 e eþitlenir
    for(p1=word;control && p1<p2;p1++,p2--)//p1 ve p2 nin karþýlaþtýrýlmasý için p1 dizinin ilk karakterine eþitlenir p1<p2 ve control deðiþkeni 1 olduðu sürece p1 artar p2 azalýr.
    {
            if (*p1 != *p2)
            {
                control=0;
            }
    }
    //son durumda sondan ve baþtan yazýmýn ayný olup olmadýðý koþulu ekrana bastýrýlýr
        if (control==1)//yada if(control) þeklinde yazýlabilir
        {
            printf("%s is a palendrome",word);
        }
        else
        {
            printf("%s is NOT palendrome",word);
        }

    return 0;
}
