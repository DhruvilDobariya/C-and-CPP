#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter any number = ");
    scanf("%d",&a);

    b=a%2;

    if(b==0)
    {
        printf("\n %d is even number.",a);
    }

    if(b==1)
    {
        printf("\n %d is odd number.",a);
    }
}
