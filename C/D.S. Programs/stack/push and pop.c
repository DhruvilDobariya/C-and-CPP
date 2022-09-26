#include<stdio.h>

struct stack* createstack(int N);
int full(struct stack *p);
int empty(struct stack *p);
void push(struct stack *p,int item);
int pop(struct stack *p);
struct stack
{
    int t;
    int n;
    int *s;
};
struct stack* createstack(int N)
{
    struct stack *p;
    p=malloc(sizeof(struct stack));
    p->n=N;
    p->t=-1;
    p->s=malloc(sizeof(int)*p->n);
    return (p);
}
int full(struct stack *p)
{
    if(p->t==p->n-1)
        return (1);
    else
        return (0);
}
int empty(struct stack *p)
{
    if(p->t==-1)
        return (1);
    else
        return (0);
}
void push(struct stack *p,int item)
{
    if(!full(p))
    {
        p->t++;
        p->s[p->t]=item;
    }
}
int pop(struct stack *p)
{
    int item;
    if(!empty(p))
    {
        item=p->s[p->t];
        p->t--;
        return (item);
    }
    return (-1);
}
void main()
{
    int choice,item;
    struct satck *p;
    p=createstack(4);

    while(1)
    {
        printf("\n1 for push.");
        printf("\n2 for pop.");
        printf("\n3 for exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n Enter a number : ");
            scanf("%d",&item);
            push(p,item);
            break;
        case 2:
            item=pop(p);
            if(item==-1)
                printf("\nStack is empty.");
            else
                printf("\nPop value is : %d",item);
            break;
        case 3:
            exit(0);
        }
    }
}
