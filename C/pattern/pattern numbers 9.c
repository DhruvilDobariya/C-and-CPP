#include<stdio.h>
void main()
{
    int i,j,n;

    printf("\n Enter n : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
