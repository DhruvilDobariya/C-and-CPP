#include<stdio.h>
void main()
{
    int a;

    printf("\n Enter any number = ");
    scanf("%d",&a);

    if(a>0)
    {
        printf("\n %d is positive number.",a);
    }

    if(a<0)
    {
        printf("\n %d is negative number.",a);
    }
}
