#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
    int x,y,d;

    printf("\n Enter value of first number = ");
    scanf("%d",&x);
    printf("\n Enter value of second number = ");
    scanf("%d",&y);

    d=add(x,y);

    printf("\n Answer is %d \n",d);
}
int add(int a,int b)
{
    int c;

    c=a+b;

    return(c);
}

