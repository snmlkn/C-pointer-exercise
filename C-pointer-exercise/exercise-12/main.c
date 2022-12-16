#include <stdio.h>
#include <stdlib.h>
#define MAX 40
// POINTER KULLANARAK SAYI DÝZÝSÝ OLUÞTURMA
int main()
{
    int n,i;
    int array[MAX];
    int *ptr;
    ptr=array;

    printf("how many elements do yo want to create?\n");
    scanf("%d",&n);

    printf("enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr =array;
     for(i=0;i<n;i++)
    {
        printf("%d .element : %d\n",i+1,*ptr);
        ptr++;
    }



    return 0;
}
