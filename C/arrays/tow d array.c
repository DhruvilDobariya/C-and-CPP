#include<stdio.h>
#include<stdlib.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j,a,b;


    retry:
    printf("\n Enter value first of 9 matrix = \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter value second of 9 matrix = \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("\n Enter your choice : \n");
    printf("\n 1 for addition of matrix");
    printf("\n 2 for subtraction of matrix \n");
    scanf("%d",&b);

    if(b==1)
    {
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else if(b==2)
    {
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n Invalid input \n");
    }

    printf("\n 1 for retry \n");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);

}
