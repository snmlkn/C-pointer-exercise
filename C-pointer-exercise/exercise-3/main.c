#include <stdio.h>
#include <stdlib.h>

//POINTER ÖRNEÐÝ POINTERDE TUTULAN DEÐERDE ÝÞLEM YAPMA
int main()
{
    int *ad1,*ad2;
    int n=10,p=20;

    ad1 =&n;
    ad2 =&p;

    printf("%d\n",*ad1);//tutulan deðer
    printf("%d\n",&ad1); //pointer adresi

    *ad1=*ad2+2;

    printf("%d\n",*ad1);//tutulan deðer
    printf("%d",&ad1); //pointer adresi

    return 0;
}
