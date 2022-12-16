#include <stdio.h>
#include <stdlib.h>
// BÝR KARAKTER DÝZÝSÝ ÝLE POINTER ALIÞTIRMASI
int main()
{
    int i;
    char sin[100]="sinem";
    char *p1;
    p1=sin;

    for(i=0;i<5;i++)
    {
       printf("%d . karakter %c olur\n",i,*(p1+i));
    }


    return 0;
}
