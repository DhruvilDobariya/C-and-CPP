#include<stdio.h>
#include<stdlib.h>

void main()
{
    int A[2][2],B[2][2],C[2][2],i,j;
    int choice;

    while(1)
    {
    printf("\n1 for addition.");
    printf("\n2 for subtraction.");
    printf("\n3 for combo.");
    printf("\n4 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter first matrix.");
        for(i=0;i<2;i++)
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
            for(j=0;j<2;j++)
            {
                printf("\nEnter element of row no.%d and column no.%d : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        printf("\nEnter first matrix.");
        for(i=0;i<2;i++)
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
            for(j=0;j<2;j++)
            {
                printf("\nEnter element of row no.%d and column no.%d : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("\nEnter first matrix.");
        for(i=0;i<2;i++)
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
            for(j=0;j<2;j++)
            {
                printf("\nEnter element of row no.%d and column no.%d : ",i+1,j+1);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        printf("\nAnswer of addition : ");
        printf("\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("\nAnswer of subtraction : ");
        printf("\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}

