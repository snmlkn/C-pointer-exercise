#include <stdio.h>
#include <stdlib.h>

// POINTER ADRES EGZESÝZÝ
int main()
{
     int array[]={10,20,30,40,50};
     int *ptr;
     ptr=array;//ptr=&array[0] ayný anlamda kullanýlýr ptr arrayin ilk elemanýnýn adresinde tutulur.

     printf("dizinin ilk elemani %d\n",*(ptr));
     printf("dizinin ilk elemaninin adresi %d\n",&array);
     ptr++;
     printf("dizinin artirmadan sonraki elemani %d\n",*(ptr));
     printf("dizinin artirmadan sonraki elemaninin adresi %d\n",ptr);

     printf("dizinin 2.artirmadan sonraki elemani %d\n",*(ptr+1));
     printf("dizinin 2.artirmadan sonraki elemaninin adresi %d\n",ptr+1);


    return 0;
}
