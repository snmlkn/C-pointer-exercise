#include <stdio.h>
#include <stdlib.h>

// FARKLI VERÝ TÝPLERiNDE DEÐER VE ADRES BASTIRMA
//pointer adresi bastýrmak için %p hexadecimal adresi bastýrmada kullanýlýr
int main()
{
    //char veri tanýmlamasý
    char   a= 's';
    char  *p1;
    p1=&a;
    //int veri tanýmlamasý
    int    b= 5;
    int   *p2;
    p2=&b;
    //double veri tanýmlamasý
    double c= (5.55555);
    double *p3;
    p3=&c;
    //float veri tanýmlamasý
    float  d= 5.55;
    float  *p4;
    p4=&d;


    printf("char turundeki veri %c ve adresi %p\n",*p1,p1);
    printf("int turundeki veri %d ve adresi %p\n",*p2,p2);
    printf("double turundeki veri %.4lf ve adresi %p\n",*p3,p3);
    printf("float turundeki veri %.2f ve adresi %p",*p4,p4);
    return 0;
}
