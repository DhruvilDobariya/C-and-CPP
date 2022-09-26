#include<stdio.h>
#include<stdlib.h>

void main()
{
    int A[3][2],B[2][3],C[3][3],i,j,k,sum;
    int choice;

    while(1)
    {
    printf("\n1 for multiplication.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter first matrix.");
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("\nEnter element of row no.%d and column no.%d : ",i+1,j+1);
                scanf("%d",&A[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter second matrix.");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\nEnter element of row no.%d and column no.%d : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        for ( i = 0 ; i < 3 ; i++ )
        {
            for ( j = 0 ; j < 3 ; j++ )
            {
                sum = 0;
                for ( k = 0 ; k < 2 ; k++ )
                {
                    sum = sum + A[i][k]*B[k][j];
                }

                C[i][j] = sum;
            }
        }
        for ( i = 0 ; i < 3 ; i++ )
        {
            for ( j = 0 ; j < 3 ; j++ )
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}


