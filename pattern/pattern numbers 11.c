#include<stdio.h>
void main()
{
    int i,j,n;

    printf("\n Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

