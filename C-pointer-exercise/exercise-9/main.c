#include <stdio.h>
#include <stdlib.h>

// FARKLI VER� T�PLERiNDE DE�ER VE ADRES BASTIRMA
//pointer adresi bast�rmak i�in %p hexadecimal adresi bast�rmada kullan�l�r
int main()
{
    //char veri tan�mlamas�
    char   a= 's';
    char  *p1;
    p1=&a;
    //int veri tan�mlamas�
    int    b= 5;
    int   *p2;
    p2=&b;
    //double veri tan�mlamas�
    double c= (5.55555);
    double *p3;
    p3=&c;
    //float veri tan�mlamas�
    float  d= 5.55;
    float  *p4;
    p4=&d;


    printf("char turundeki veri %c ve adresi %p\n",*p1,p1);
    printf("int turundeki veri %d ve adresi %p\n",*p2,p2);
    printf("double turundeki veri %.4lf ve adresi %p\n",*p3,p3);
    printf("float turundeki veri %.2f ve adresi %p",*p4,p4);
    return 0;
}
