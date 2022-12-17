#include <stdio.h>
#include <stdlib.h>
#define max 5
//POINTER KULLANARAK 5 karakterli KELÝMEYÝ TERSTEN YAZMA

int main()
{
    char name[max];
    char temp,i;
    char *ptr,*ptr2;

    printf("enter a char array 5 chararcter:\n");
    gets(name);

    printf("%s",name);

    ptr2=name+max-1;

    for(ptr=name;ptr<ptr2;ptr++,ptr2--)
    {
        temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;
    }
    printf("\nreversed name\n");
    for(i=0;i<5;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
