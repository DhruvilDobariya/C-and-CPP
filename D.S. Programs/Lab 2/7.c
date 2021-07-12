#include<stdio.h>

void main()
{
    int a[100],n,b,c,i;

    printf("\nEnter value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter no.%d element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n old array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter 1st number : ");
    scanf("%d",&b);
    printf("\nEnter 2st number : ");
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
            printf("\nIndex is : %d and replaced number is : %d",i,c);
        }
    }
    printf("\nnew array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
