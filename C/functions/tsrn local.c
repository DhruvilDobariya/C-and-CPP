#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    void add(int,int);

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
