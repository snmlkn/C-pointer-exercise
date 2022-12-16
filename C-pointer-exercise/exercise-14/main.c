#include <stdio.h>
#include <stdlib.h>

//KULLANICIDAN ALINAN DEÐERLERLE BÝR DÝZÝ OLUÞTURUP POINTER ÝLE BAÞKA DÝZÝYE KOPYALAMA

void bastir(int *arr,int N)
{
    printf("degerler:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*arr);
        arr++;
    }
}



int main()
{

  int source_arr[100];
  int dest_arr[100];
  int N;
  int *source_ptr;
  int *dest_ptr;
  int *end_ptr;

  source_ptr=source_arr;
  dest_ptr =dest_arr;

  printf("dizi kac elemanli olsun\n");
  scanf("%d",&N);

  printf("lutfen elmanlari girin\n");
  for(int i=0;i<N;i++)
  {
      scanf("%d",(source_ptr+i));
  }

  end_ptr=&source_arr[N-1];

  printf("kaynak array ");
  bastir(source_arr,N);

  while(source_ptr<=end_ptr)
  {
      *dest_ptr=*source_ptr;
      source_ptr++;
      dest_ptr++;
  }
  printf("\ndest array kopyalanmis hali");
  bastir(dest_arr,N);

    return 0;
}



int ara(int *array,int size,int toSearch)
{
    int index=0;//aranan elemanýn kaçýncý indexte olduðunu tutmak için tanýmlandý
    int *arrEnd;

    arrEnd=(array+size-1);

    while(array<=arrEnd && *array != toSearch)
    {
        array++;
        index++;
    }
    if(array<=arrEnd)
    {
        return index;
    }
        return -1;
}
