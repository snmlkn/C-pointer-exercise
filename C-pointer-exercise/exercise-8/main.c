#include <stdio.h>
#include <stdlib.h>

// KULLANICI TARAFIINDAN G�R�LEN KEL�MEN�N BA�TAN VE SONDAN YAZIMININ AYNI OLUP OLMADI�INI KONTROL EDEN PROGRAM(palendrome kontrol�)
int main()
{
    char word[100];//bir kaakter dizisi tan�mlan�r
    char *p1,*p2; //girilen kelimenin ba�tan ve sondan adreslerini tutmak i�in iki pointer tan�mlan�r.
    int control;

    //kullan�c�dan c�mle istenir
    printf("enter a word max 100 character\n");
    gets(word);
    //p2 yi dizinin son karakterinin adresine e�itleriz
    for(p2=word;*p2;p2++);//*p2 ko�ulu adresi '\0' karakterine gelene kadar devam ettirir
    p2--;//dizinin son karakterine geri gelmek i�in p2 bir eksiltilir.
    control=1;//control de�i�keni 1 e e�itlenir
    for(p1=word;control && p1<p2;p1++,p2--)//p1 ve p2 nin kar��la�t�r�lmas� i�in p1 dizinin ilk karakterine e�itlenir p1<p2 ve control de�i�keni 1 oldu�u s�rece p1 artar p2 azal�r.
    {
            if (*p1 != *p2)
            {
                control=0;
            }
    }
    //son durumda sondan ve ba�tan yaz�m�n ayn� olup olmad��� ko�ulu ekrana bast�r�l�r
        if (control==1)//yada if(control) �eklinde yaz�labilir
        {
            printf("%s is a palendrome",word);
        }
        else
        {
            printf("%s is NOT palendrome",word);
        }

    return 0;
}
