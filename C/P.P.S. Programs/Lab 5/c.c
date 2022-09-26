#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter first number = ");
    scanf("%d",&a);
    printf("\n Enter second number = ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("\n %d is largest number.",a);
    }

    if(a<b)
    {
        printf("\n %d is largest number.",b);
    }
}
