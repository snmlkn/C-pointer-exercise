#include <stdio.h>
#include <stdlib.h>

//ADRES KULLANARAK ÇAÐIRILAN FONKSÝYONDA 4 ÝÞLEM YAPMA
void proccess(int islem, int num1, int num2,int *result)
{
    switch(islem)
    {
    case '+':
        {
            *result=num1+num2;
            break;
        }
    case '-':
        {
            *result=num1-num2;
            break;
        }
    case '*':
        {
            *result=num1*num2;
            break;
        }
    case '/':
        {
            *result=num1/num2;
            break;
        }
    }
}
int main()
{
    int num1,num2;
    char islem;
    int result;
    printf("yapilacak islemi girin\n");
    scanf("%c",&islem);
    printf("sayillari girin\n");
    scanf("%d %d",&num1,&num2);
    proccess(islem,num1,num2,&result);
    printf("\n");
    printf("the result is %d",result);
    return 0;
}
