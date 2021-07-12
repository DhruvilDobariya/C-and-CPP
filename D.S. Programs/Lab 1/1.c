#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,n,c,a;
    retry:
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    c=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("\n%d is prime number.\n",n);
    }
    else
    {
        printf("\n%d is not prime number.\n",n);
    }

    printf("\n\n Enter 1 for retry");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
