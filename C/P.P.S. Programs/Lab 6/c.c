#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter frist number = ");
    scanf("%d",&a);
    printf("\n Enter second number = ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("\n %d is largest number \n",a);
    }
    else
    {
        printf("\n %d is largest number \n",b);
    }
}
