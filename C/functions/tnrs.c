#include<stdio.h>
#include<conio.h>
int add();
void main()
{
    int d;

    d=add();

    printf("\n Answer is %d \n",d);
}
int add()
{
    int a,b,c;

    printf("\n Enter value of first number = ");
    scanf("%d",&a);
    printf("\n Enter value of second number = ");
    scanf("%d",&b);

    c=a+b;

    return(c);
}

