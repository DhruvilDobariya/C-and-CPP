#include<stdio.h>
void main()
{
    int i,j,n,k=1;

    printf("\n Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("%d\t",k);
                k++;
        }
        printf("\n");
    }
}