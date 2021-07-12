#include<stdio.h>
#include<stdlib.h>

void push(int s[],int x,int *top,int n);
int pop(int s[],int *top);
int peep(int s[],int *top,int i);
void change(int s[],int x,int *top,int i);
void display(int s[],int *top);
void main()
{
    int S[10],x,top=-1,n=3,i;
    int choice;

    while(1)
    {
        printf("\n1 for push.");
        printf("\n2 for pop.");
        printf("\n3 for peep.");
        printf("\n4 for change,");
        printf("\n5 for display.");
        printf("\n6 for exit.");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter element : ");
            scanf("%d",&x);
            push(S,x,&top,n);
            break;
        case 2:
            x=pop(S,&top);
            if(x!=-999)
            {
                printf("\nDequeue's element is : %d",x);
            }
            break;
        case 3:
            printf("\nEnter position : ");
            scanf("%d",&i);
            x=peep(S,&top,i);
            if(x!=-999)
            {
                printf("\nDequeue's element is : %d",x);
            }
            break;
        case 4:
            printf("\nEnter new element : ");
            scanf("%d",&x);
            printf("\nEnter position : ");
            scanf("%d",&i);
            change(S,x,&top,i);
            break;
        case 5:
            display(S,&top);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nInvalid input.");
        }
    }
}
void push(int s[],int x,int *top,int n)
{
    if(*top>=n-1)
    {
        printf("\nStack is overflow!!!!\n");
    }
    else
    {
        *top=*top+1;
        s[*top]=x;
    }
}
int pop(int s[],int *top)
{
    if(*top==-1)
    {
        printf("\nStack is underflow!!!!\n");
        return(-999);
    }
    else
    {
        *top=*top-1;
        return (s[*top+1]);
    }
}
int peep(int s[],int *top,int i)
{
    if(*top-i+1<=-1)
    {
        printf("\nStack is underflow!!!!\n");
        return(-999);
    }
    else
    {
        return (s[*top-i+1]);
    }
}
void change(int s[],int x,int *top,int i)
{
    if(*top-i+1<=-1)
    {
        printf("\nStack is underflow!!!!\n");
    }
    else
    {
        s[*top-i+1]=x;
    }
}
void display(int s[],int *top)
{
    int i;
    for(i=0;i<=*top;i++)
    {
        printf("%d ",s[i]);
    }
}
