#include <stdio.h>
#include <stdlib.h>

// KULLANICIDAN ALINAN İKİ SAYININ ADRES KULLANILARAK YER DEĞİŞTİRMESİ
int main()
{
    int num1,num2,temp;
    int *ptr1,*ptr2;

    ptr1=&num1;
    ptr2=&num2;

    printf("enter two number to change each other\n");
    scanf("%d %d",ptr1,ptr2);


    printf("first number %d second number %d\n",num1,num2);
    printf("first adress %d second adress %d\n",ptr1,ptr2);

    //pointerda tutulan deðer önce geçici adýndaki deðiþkene atanýr ve verilerin yerleri deðiþtirilir
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("first number %d second number %d\n",num1,num2);
    printf("first adress %d second adress %d\n",ptr1,ptr2);




    return 0;
}
