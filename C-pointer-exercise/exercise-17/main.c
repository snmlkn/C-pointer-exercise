#include <stdio.h>
#include <stdlib.h>

//POINTER KULLANARAK FAKTÖRÝYEL HESAPLAMA
int faktor(int *n)
{
    int i;
    int sonuc=1;
    for(i=*n;i>=1;i--)
    {
        sonuc *= (*n);
        (*n) --;
    }
    return sonuc;
}

int main()
{
    int original,n;

    printf("faktoriyel alinacak sayiyi girin\n");
    scanf("%d",&n);
    original=n;
    printf("%d! = %d",original,faktor(&n));

    return 0;
}
