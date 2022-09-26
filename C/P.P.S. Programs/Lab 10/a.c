#include<stdio.h>
void main()
{
    int i,n,a=0;

    printf("\n Enter value of n = ");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        a=a+i;
    }

    printf("%d \n",a);
}
