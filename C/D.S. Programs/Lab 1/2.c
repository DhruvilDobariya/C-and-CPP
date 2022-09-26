#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,fact,a;

    retry:
    printf("\n Enter value of n = ");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("\n Answer is = %d",fact);
    printf("\n\n Enter 1 for retry");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
