#include <stdio.h>
#include <stdlib.h>


//3 2 lik bir matrisin elemenalarýný kullanýcýdan alan ve max, min toplam deðerlerini ekrana basan program
#define A 3
#define B 2
void init_tablo(int array[A][B])
{
    int i,j;
    printf("%d ve %d boyutunda bir matris girin\n",A,B);
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            scanf("\n%d",&array[i][j]);
        }
    }
}

void print_tablo(int array[A][B])
{
    int i,j;
    printf("tablomuz\n");
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
}

void calcul(int array[A][B],int *max,int *min,int *toplam)
{
    int i,j;
    *max=array[0][0];
    *min=array[0][0];
    *toplam=0;
    for(i=0;i<A;i++)
    {
        for(j=0;j<B;j++)
        {
            if(array[i][j]>*max)
            {
                *max=array[i][j];
            }

            if(array[i][j]<*min)
            {
                *min=array[i][j];
            }
            *toplam=*toplam+array[i][j];
        }
    }
}

int main()
{
    int min,max,toplam;
    int array[A][B];
    init_tablo(array);
    print_tablo(array);
    calcul(array,&max,&min,&toplam);
    printf("max %d\n",max);
    printf("min %d\n",min);
    printf("toplam %d\n",toplam);
    return 0;
}

