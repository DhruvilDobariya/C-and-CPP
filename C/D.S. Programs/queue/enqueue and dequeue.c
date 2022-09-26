#include<stdio.h>
#include<stdlib.h>

void enqueue(int q[],int n,int y,int *f,int *r);
int dequeue(int q[],int *f,int *r);
void display(int q[],int *f,int *r);
void main()
{
    int Q[10],n=3,y,F=-1,R=-1;
    int choice;

    while(1)
    {
        printf("\n1 for enqueue.");
        printf("\n2 for dequeue.");
        printf("\n3 for display.");
        printf("\n4 for exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n Enter a number : ");
            scanf("%d",&y);
            enqueue(Q,y,n,&F,&R);
            break;
        case 2:
            y=dequeue(Q,&F,&R);
            printf("\nDequeue's element is : %d",y);
            break;
        case 3:
            display(Q,&F,&R);
            break;
        case 4:
            printf("\n");
            printf("Thank you for using my program!!!!\n");
            printf("Create by : Dhruvil A. Dobariya\n");
            exit(0);
            break;
        default:
            printf("\nInvalid input.");
        }
    }
}
void enqueue(int q[],int y,int n,int *f,int *r)
{
    if(*r>=n-1)
    {
        printf("\nQueue is overflow.");
    }
    else
    {
        *r=*r+1;
        q[*r]=y;
        if(*f==-1)
        {
            *f=0;
        }
    }

}
int dequeue(int q[],int *f,int *r)
{
    int y;

    if(*f==-1)
    {
        printf("\nQueue is underflow.");
    }
    else
    {
        y=q[*f];
        if(*f==*r)
        {
            *f=-1;
            *r=-1;
        }
        else
        {
            *f=*f+1;
        }
        return (y);
    }
}
void display(int q[],int *f,int *r)
{
    int i;
    if (*f == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = *f; i <= *r; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}
