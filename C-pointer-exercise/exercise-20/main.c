#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//GÝRÝLEN KARAKTERDEN ÝSTENÝLENÝ ÇIKARMA

int main()
{
    char name[100];
    char *ptr;
    char del;



    printf("enter character array\n");
    gets(name);

    printf("which one is deleted\n");
    scanf("%c",&del);

    /*for ile deneme
    for(ptr=name;*ptr;ptr++)
    {
        if(*ptr == del)
        {
           strcpy(ptr,ptr+1);
        }
    }
    */
    //while ile deneme
    ptr=name;
    while(*ptr)
    {
        if(*ptr == del)
        {
           strcpy(ptr,ptr+1);
        }
        else
        {
            ptr++;
        }
    }
    printf("%s",name);

    return 0;
}
