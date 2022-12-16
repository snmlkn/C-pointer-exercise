#include <stdio.h>
#include <stdlib.h>

//KULLANICIDAN ALINAN DÐERLEÝN MÝN MAXLARINI BULMA
//pointer kullanarak
int main()
{
    int array[5];
    int *ptr_array;
    int min,max;

    printf("dizinin elemanlarini girin(5 eleman girin)\n");

    for(ptr_array=array;ptr_array<array+5;ptr_array++)
    {
        scanf("%d",ptr_array);
    }
    min=max=array[0];

    for(ptr_array=array+1;ptr_array<array+5;ptr_array++)
    {
        if(*ptr_array<min)
        {
            min=*ptr_array;
        }
        if(*ptr_array>max)
        {
            max=*ptr_array;
        }
    }

    printf("min %d\n",min);
    printf("max %d\n",max);


    return 0;
}
