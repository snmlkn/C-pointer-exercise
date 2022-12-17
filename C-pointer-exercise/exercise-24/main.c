#include <stdio.h>
#include <stdlib.h>
//POINTER KULLANARAK 5 kelimeyi tersten yazma

int main()
{
    char dizi[5][50];
    char *ilk,*ikinci;
    int i;
    char gecici;
    printf("lutfen 5 kelime girin\n");

    for(i=0;i<5;i++)
    {
        printf("%d.kelime: ",i+1);
        scanf("%s",dizi[i]);
    }
    for(i=0;i<5;i++)
    {
        ilk=ikinci=dizi+i;//pointerlarý dizinn ilk elemanýnýn adresine eþþitleriz
        while(*ikinci)//ikinci pointerý arrayin son adresine taþýnýr
        {
            ikinci++;
        }
        ikinci--;
        while(ilk<ikinci)
        {
            gecici=*ilk;
            *ilk=*ikinci;
            *ikinci=gecici;
            ilk++;
            ikinci--;
        }
    }

    for(i=0;i<5;i++)
    {
        printf("%s\n",*(dizi+i));
    }
    return 0;
}
