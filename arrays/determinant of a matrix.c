#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,d[3][3],A,a;

    retry:
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element : ");
            scanf("%d",&d[i][j]);
        }
        printf("\n");
    }
    A=((d[0][0]*(d[1][1]*d[2][2]-d[1][2]*d[2][1]))-(d[0][1]*(d[1][0]*d[2][2]-d[1][2]*d[2][0]))+(d[0][2]*(d[1][0]*d[2][1]-d[1][1]*d[2][0])));

    printf("\n Answer is = %d",A);

    printf("\n 1 for retry \n");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
