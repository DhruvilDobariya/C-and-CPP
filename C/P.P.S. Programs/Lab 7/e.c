#include<stdio.h>
void main()
{
    int a,b,c;

    printf("\n Enter first number = ");
    scanf("%d",&a);
    printf("\n Enter second number = ");
    scanf("%d",&b);
    printf("\n Enter third number = ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("\n %d is largest number \n",a);
    }
    else if(b>a && b>c)
    {
        printf("\n %d is largest number \n",b);
    }
    else
    {
        printf("\n %d is largest number \n",c);
    }
}
