#include<stdio.h>
void main()
{
    int x=5;
    int *j;

    j=&x;

    printf("\n %d ,%u \n",x,j);
    printf("\n %d ,%u \n",*j,&x);
    printf("\n %d \n",*&j);
}
