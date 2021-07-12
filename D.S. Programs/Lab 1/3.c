#include<stdio.h>
#include<stdlib.h>

int fun(int);
void main()
{
    int a,b,c;
    retry:
    printf("\n Enter value of number = ");
    scanf("%d",&a);

    b=fun(a);

    printf("\n sum of %d number is = %d \n",a,b);

    printf("\n\n Enter 1 for retry");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&c);
    if(c==1)
        goto retry;
    else
        exit(0);
}
int fun(int x)
{
    int y;

    if(x==1)
        return(x);

    y=x*fun(x-1);
    return(y);
}

