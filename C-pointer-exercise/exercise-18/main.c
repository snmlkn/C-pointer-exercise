#include <stdio.h>
#include <stdlib.h>
//POINTER KULLANARAK DÝZÝ ELEMANLARININ YER DEÐÝÞTÝRÝLMESÝ

int main()
{
    int array[10];
    int *ptr_arr;
    int *End_arr;

    int size;
    int temp;

    printf("eleman sayisini girin\n");
    scanf("%d",&size);

    printf("elemanlari girin\n");
    for(ptr_arr=array;ptr_arr<array+size;ptr_arr++)
    {
        scanf("%d",ptr_arr);
    }

    printf("array elemanlari:\n");
    for(ptr_arr=array;ptr_arr<array+size;ptr_arr++)
    {
        printf("%4d",*ptr_arr);
    }


    End_arr=(array+size-1);
    for(ptr_arr=array;ptr_arr<End_arr;ptr_arr++,End_arr--)
    {

           temp=*ptr_arr;
           *ptr_arr=*End_arr;
           *End_arr=temp;



    }

   printf("\nTersine array elemanlari:\n");
    for(int i=0;i<size;i++)
    {
        printf("%4d",array[i]);
    }
    return 0;
}
