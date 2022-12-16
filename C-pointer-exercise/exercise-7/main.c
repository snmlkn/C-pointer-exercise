#include <stdio.h>
#include <stdlib.h>

// DÝZÝNÝN ÝÇÝNDEKÝ TÜM ELEMANLARI POINTER KULLANARAK 0 'A EÞÝTLEME EGZESÝZÝ
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
