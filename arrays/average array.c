#include<stdio.h>
void main()
{
    int i,a[10];
    int sum=0;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("\n Enter any number : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }

    avg=(float)sum/10;

    printf(" avg = %0.2f",avg);
}
