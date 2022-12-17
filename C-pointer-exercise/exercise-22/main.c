#include <stdio.h>
#include <stdlib.h>
#define max 8
//POINTER KULLANARAK BÝR DÝZÝYÝ DÝÐERÝNE KOPYALAMA

int main()
{
    char array[max]={'k','l','b','d','q','i','s','t'};
    char *ptr;
    char *ptr_cpy;
    char array_cpy[max];
    ptr_cpy=array_cpy;
    printf("copy procces...\n ");
    for(ptr=array;ptr<array+max;ptr++)
    {

        *ptr_cpy=*ptr;
        ptr_cpy++;

    }

    printf("array elements:\n");
    for(int i=0;i< max;i++)
    {

       printf("%c\n",*(array+i));
    }
     printf("copied array elements:\n");
    for(int i=0;i< max;i++)
    {

       printf("%c\n",*(array_cpy+i));
    }

    return 0;
}
