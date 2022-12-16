#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];

    char *ptr;


    printf("enter a name to count characters\n");
    gets(name);

    for(ptr=name;*ptr;ptr++);

    printf("%s array has %d character",name,ptr-name);


    return 0;
}
