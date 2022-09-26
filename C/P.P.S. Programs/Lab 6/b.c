#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter any number = ");
    scanf("%d",&a);

    b=a%2;

    if(b==0)
    {
        printf("\n %d is even number \n",a);
    }
    else
    {
        printf("\n %d is odd number \n",a);
    }
}
