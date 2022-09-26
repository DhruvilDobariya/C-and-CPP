#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,sum=0;
    float avg;

    printf("\n Enter ten numbers: \n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.00;
    printf("\n Answer is %f \n",avg);
}
