#include <stdio.h>
#include <stdlib.h>
//KULLANICIDAN ALINAN DÐERLEÝN MÝN MAXLARINI BULMA
// adres kullanarak

    int findMin(int *array,int size)
    {
        int i,min;
        min=*array;
        for(i=0;i<size;i++)
        {
            if(*(array+i)<min)
            {
                min=*(array+i);
            }

        }
        return min;
    }

     int findMax(int *array,int size)
    {
        int i,max;
        max=*array;
        for(i=0;i<size;i++)
        {
            if(*(array+i)>max)
            {
                max=*(array+i);
            }

        }
        return max;
    }

int main()
{
    int size;
    int array[100];
    int i=0;
    int min,max;
    printf("dizinin eleman sayisini girin\n");
    scanf("%d",&size);

    printf("elemananlari girin\n");

    while(i<size)
    {
        scanf("%d",array+i);
        i++;
    }
    min=findMin(array,size);
    max=findMax(array,size);

    printf("min = %d ve max = %d\n",min,max);

    return 0;
}
