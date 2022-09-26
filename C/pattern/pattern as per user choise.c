#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,n1,n2,a;

    retry:
    printf("\n Enter value of row = ");
    scanf("%d",&n1);
    printf("\n Enter value of column = ");
    scanf("%d",&n2);
    printf("\n");

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n Enter 1 for retry. \n");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
