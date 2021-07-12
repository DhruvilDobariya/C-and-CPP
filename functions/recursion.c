#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
    int a,b;

    printf("\n Enter value of number = ");
    scanf("%d",&a);

    b=sum(a);

    printf("\n sum of %d number is = %d \n",a,b);
}
int sum(int x)
{
    int y;

    if(x==1)
        return(x);

    y=x+sum(x-1);
    return(y);
}
