#include<stdio.h>
#include<stdlib.h>

void cqinsert(int q[],int y,int n,int *f,int *r);
int cqdelete(int q[],int n,int *f,int *r);
void main()
{
    int Q[10],n=3,y,F=-1,R=-1,i;
    int choice;

    while(1)
    {
        printf("\n1 for insert.");
        printf("\n2 for delete.");
        printf("\n3 for exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n Enter a number : ");
            scanf("%d",&y);
            cqinsert(Q,y,n,&F,&R);
            printf("\n");
            for(i=0;i<10;i++)
            {
                printf("%d\t",Q[i]);
            }
            break;
        case 2:
            y=cqdelete(Q,n,&F,&R);
            printf("\nDequeue's element is : %d",y);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nInvalid input.");
        }
    }
}
void cqinsert(int q[],int y,int n,int *f,int *r)
{
    printf("\nn=%d",n);
    printf("%\nF=%d",*f);
    printf("\nR=%d\n",*r);

    if(*r==n-1)
        *r=0;
    else
        *r=*r+1;

    if(*f==*r)
    {
        printf("\nQueue is overflow.");
    }
    q[*r]=y;
    if(*f==-1)
        *f=0;

}
int cqdelete(int q[],int n,int *f,int *r)
{
    printf("\nn=%d",n);
    printf("%\nF=%d",*f);
    printf("\n%R=%d\n",*r);

    int y;
    if(*f==-1)
    {
        printf("\nQueue is underflow.");
    }
    y=q[*f];
    if(*f==*r)
    {
        *f=-1;
        *r=-1;
        return (y);
    }
    if(*f==n-1)
    {
        *f=0;
    }
    else
    {
        *f=*f+1;
    }
    return (y);
}

