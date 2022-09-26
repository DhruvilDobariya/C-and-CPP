#include<stdio.h>
void main()
{
    int a,b,max;

    printf("\n Enter value of first number = ");
    scanf("%d",&a);
    printf("\n Enter value of second number = ");
    scanf("%d",&b);

    (max=a>b ? a : b );
    printf("\n Largest number is %d \n",max);

}
