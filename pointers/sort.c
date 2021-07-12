#include<stdio.h>
#include<stdlib.h>
void input(int *);
void display(int *);
void bubblesort(int *);
void explicitlysort(int *);
void main()
{
    int a[5];
    int b,c;

    retry:
    printf("\n Enter any five numbers : \n");
    input(a);
    printf("\n Enter your choice : \n");
    printf("\n 1 for bubble sorting \n");
    printf("\n 2 for explicitly sort \n");
    scanf("%d",&b);

    if(b==1)
    {
         bubblesort(a);
         display(a);
         printf("\n");
    }
    else if(b=-2)
    {
        explicitlysort(a);
        display(a);
        printf("\n");
    }
    else
    {
        printf("\n Invalid input \n");
    }
    printf("\n 1 for retry \n");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&c);
    if(c==1)
        goto retry;
    else
        exit(0);

}
void input(int *p)
{
    int i;

    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}
void display(int *p)
{
    int i;

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
