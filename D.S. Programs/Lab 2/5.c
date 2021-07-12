#include<stdio.h>
#include<stdlib.h>

void input(int *);
void display(int *);
void bubblesort(int *);
void explicitlysort(int *);
void main()
{
    int a[5];
    int choice;

    while(1)
    {
    printf("\n1 for bubble sorting.");
    printf("\n2 for explicitly sort.");
    printf("\n3 for combo.");
    printf("\n4 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        input(a);
        bubblesort(a);
        display(a);
        printf("\n");
        break;
    case 2:
        input(a);
        explicitlysort(a);
        display(a);
        printf("\n");
        break;
    case 3:
        input(a);
        bubblesort(a);
        display(a);
        printf("\n");
        explicitlysort(a);
        display(a);
        printf("\n");
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\n Invalid input \n");
    }
    }
}
void input(int *p)
{
    int i;

    for(i=0;i<=4;i++)
    {
        printf("\nEnter no.%d element : ",i+1);
        scanf("%d",p+i);
    }
}
void display(int *p)
{
    int i;
    printf("\nAnswer is : ");
    for(i=0;i<=4;i++)
        printf("%d ",*(p+i));
}
void bubblesort(int *p)
{
    int round,t,i;

    for(round=0;round<4;round++)
    {
        for(i=0;i<4-round;i++)
            if(*(p+i)>*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
    }
}
void explicitlysort(int *p)
{
    int round,t,i;

    for(round=0;round<4;round++)
    {
        for(i=0;i<4-round;i++)
            if(*(p+i)<*(p+i+1))
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
    }
}
