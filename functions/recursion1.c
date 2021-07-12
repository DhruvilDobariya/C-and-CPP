#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sum(int);
void main()
{
    int a,b,c;
    
    printf("\n Enter value of number = ");
    scanf("%d",&a);

    if(a==1)
    {
        b=1;
        printf("\n Sum of %d number is = %d \n",a,b);
        exit(0);

    }
    else if(a%2==0)
    {
        c=(a*2)-(a+1);
    }
    else
    {
        c=a;
    }

    b=sum(c);

    printf("\n Sum of %d number is = %d \n",a,b);
}
int sum(int x)
{
    int y;

    if(x==1)
        return(x);

    y=x+sum(x-2);
    return(y);
}
