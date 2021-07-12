#include<stdio.h>
void main()
{
    int i=1;
    lebel:
    if(i<=5)
    {
        printf("\n Dhruvil Doabriya \n");
    }
    i++;
    if(i<=5)
    {
        goto lebel;
    }
}
