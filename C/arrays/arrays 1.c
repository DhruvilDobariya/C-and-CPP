#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[10],i,n,sum;
    int choice;

    while(1)
    {
    printf("\n1 for sum of element.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter value of n : ");
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            printf("\nEnter value of %d element : ",i+1);
            scanf("%d",&a[i]);
        }
        for(i=0;i<=n;i++)
        {
            sum=sum+a[i];
        }
        printf("\nAnswer is %d",sum);
        break;
    case 2:
        exit(0);
    }

    }
}
