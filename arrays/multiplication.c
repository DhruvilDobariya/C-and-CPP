#include <stdio.h>
#include<stdlib.h>
void main()
{
    int m, n, p, q, i, j, k, a, sum = 0;
    int A[10][10], B[10][10],C[10][10];

    retry:
    printf("\n Enter the number of rows and columns of first matrix \n");
    scanf("%d%d", &m, &n);
    printf("\n Enter the elements of first matrix \n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter the number of rows and columns of second matrix \n");
    scanf("%d%d", &p, &q);

    if ( n != p )
        printf("\n Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("\n Enter the elements of second matrix \n");

        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        for ( i = 0 ; i < m ; i++ )
        {
            for ( j = 0 ; j < q ; j++ )
            {
                for ( k = 0 ; k < p ; k++ )
                {
                    sum = sum + A[i][k]*B[k][j];
                }

                C[i][j] = sum;
                sum = 0;
            }
        }

        printf("\n Product of entered matrices:- \n");

        for ( i = 0 ; i < m ; i++ )
        {
            for ( j = 0 ; j < q ; j++ )
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }

    printf("\n 1 for retry \n");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
