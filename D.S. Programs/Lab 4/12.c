#include<stdio.h>
#include<stdlib.h>

void swap(int*,int*);
void main()
{
    int a,b;
    int choice;

    while(1)
    {
    printf("\n1 for swaping.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\n Enter value of a : ");
        scanf("%d",&a);
        printf("\n Enter value of b : ");
        scanf("%d",&b);

        swap(&a,&b);

        printf("\n a=%d b=%d \n",a,b);
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}
void swap(int *x,int *y)
{
    int t;

    t=*x;
    *x=*y;
    *y=t;
}

