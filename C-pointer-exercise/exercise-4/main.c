#include <stdio.h>
#include <stdlib.h>

//�K� DE���KEN�N DE�ER�N� ADRESS KULLANARAK DE���T�RME

void change(int *ad1, int *ad2)//main fonksiyonundan g�nderilen adresler bu pointerlara atan�r
{
    int temp;
    temp=*ad1; // ad1 pointerdaki adresin tuttu�u de�i�keni temp de�i�kenine atar
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
