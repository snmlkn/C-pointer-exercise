#include <stdio.h>
#include <stdlib.h>

// D�Z�N�N ���NDEK� T�M ELEMANLARI POINTER KULLANARAK 0 'A E��TLEME EGZES�Z�
int main()
{
    int array[100];
    int *pt;
    pt=&array[0];

    for(pt=array;pt<array+100;pt++)
    {
        *pt=0;
    }
    for(pt=array;pt<array+100;pt++)
    {
        printf("%d\n",*pt);
    }


    return 0;
}
