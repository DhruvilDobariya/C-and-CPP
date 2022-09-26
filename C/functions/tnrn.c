#include<stdio.h>
#include<conio.h>
void main()
{
    void add(void);

    add();
}
void add()
{
    int a,b,c;

    printf("\n Enter value of first number = ");
    scanf("%d",&a);
    printf("\n Enter value of second number = ");
    scanf("%d",&b);

    c=a+b;

    printf("\n Answer is %d \n",c);
}
