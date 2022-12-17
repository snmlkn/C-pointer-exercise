#include <stdio.h>
#include <stdlib.h>

//POINTER VE KARAKTER DÝZÝSÝ tek çift sayý bastýrma

int main()
{
    int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *ptr;

    printf("first situation :\n");

    for(ptr=array;*ptr;ptr++)
    {
        printf("%3d",*ptr);
    }

    printf("\n even numbers:\n");
    for(ptr=array;*ptr;ptr+=2)
    {
        printf("%3d",*ptr);
    }
    printf("\n odd numbers:\n");
    for(ptr=array+1;*ptr;ptr+=2)
    {
        printf("%3d",*ptr);
    }
    return 0;
}
