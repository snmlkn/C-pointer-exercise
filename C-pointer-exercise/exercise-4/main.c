#include <stdio.h>
#include <stdlib.h>

//ÝKÝ DEÐÝÞKENÝN DEÐERÝNÝ ADRESS KULLANARAK DEÐÝÞTÝRME

void change(int *ad1, int *ad2)//main fonksiyonundan gönderilen adresler bu pointerlara atanýr
{
    int temp;
    temp=*ad1; // ad1 pointerdaki adresin tuttuðu deðiþkeni temp deðiþkenine atar
    *ad1=*ad2;
    *ad2=temp;
}

int main()
{
    int num1=1,num2=2;
    printf("num1 %d ve num2 %d\n",num1,num2);
    change(&num1,&num2);
    printf("\n \n");
    printf("num1 %d ve num2 %d\n",num1,num2);
    return 0;
}
