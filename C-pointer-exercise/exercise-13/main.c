#include <stdio.h>
#include <stdlib.h>
#define MAX 40
// 1-KULLANICIDAN ALINAN DEÐERLERLE BÝR DÝZÝ OLUÞTURUP POINTER ÝLE BAÞKA DÝZÝYE KOPYALAMA
int main()
{
  int n,i;
  int arr[MAX];
  int narr[MAX];
  int *ptr;
  ptr = arr;
  printf("enter array number of elements:\n");
  scanf("%d",&n);

  printf("enter elements of arr[]\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",ptr);
      ptr++;
  }
  ptr =arr;
  for(i=0;i<n;i++)
  {
      narr[i]=*ptr;
      ptr++;
  }
  ptr=arr;
  printf("arr[] narr[]\n");
  for(i=0;i<n;i++)
  {
      printf("%4d %5d",arr[i],narr[i]);
      printf("\n");
  }

    return 0;
}
