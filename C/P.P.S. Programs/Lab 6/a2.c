#include<stdio.h>
void main()
{
    int a,b,c;

    printf("\n Enter value of first number = ");
    scanf("%d",&a);
    printf("\n Enter value of second number = ");
    scanf("%d",&b);
    printf("\n Enter value of third  number = ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("\n %d is largest number \n",a);
        }
        else
        {
            printf("\n %d is largest number \n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\n %d is largest number \n",b);
        }
        else
        {
            printf("\n %d is largest number \n",c);
        }
    }
}
