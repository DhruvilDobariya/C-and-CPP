#include<stdio.h>
void main()
{
    int a,b,c,max;

    printf("\n Enter value of first number = ");
    scanf("%d",&a);
    printf("\n Enter value of second number = ");
    scanf("%d",&b);
    printf("\n Enter value of third number = ");
    scanf("%d",&c);

    (max=a>b ?(a>c?a:b):(b>c?b:c));
    printf("\n Largest number is %d \n",max);

}

