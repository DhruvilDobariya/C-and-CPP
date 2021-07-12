#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;

    printf("\n Enter value of a : ");
    scanf("%d",&a);
    printf("\n Enter value of b : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\n a=%d b=%d \n",a,b);
}
void swap(int *x,int *y)
{
    int t;

    t=*x;
    *x=*y;
    *y=t;
}
