#include <stdio.h>
#include <stdlib.h>

// ADRES KULLANARAK ÝKÝ SAYININ TOPLAMINI ALMA
int main()
{
    int num1,num2,submit;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;


    printf("enter two number\n");
    scanf("%d %d",ptr1,ptr2);
    submit=*ptr1+*ptr2;
    printf("submition result is %d",submit);



    return 0;
}
