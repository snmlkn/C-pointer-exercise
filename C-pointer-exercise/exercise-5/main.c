#include <stdio.h>
#include <stdlib.h>
// B�R KARAKTER D�Z�S� �LE POINTER ALI�TIRMASI
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
