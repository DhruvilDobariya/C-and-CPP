#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
    int x,y;

    printf("\n Enter value of first number = ");
    scanf("%d",&x);
    printf("\n Enter value of second number = ");
    scanf("%d",&y);

    add(x,y);

}
void add(int a,int b)
{
    int c;

    c=a+b;

    printf("\n Answer is %d \n",c);
}
