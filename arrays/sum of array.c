#include<stdio.h>

void main()
{
    int i,a[10];
    int sum=0;


    for(i=0;i<10;i++)
    {
        printf("\n Enter any number : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }

    printf(" sum = %d",sum);
}
