#include<stdio.h>

struct date
{
    int d,m,y;
};
void main()
{
    struct date today;

    printf("\nEnter today's date : ");
    scanf("%d%d%d",&today.d,&today.m,&today.y);

    printf("\nDate : %d-%d-%d",today.d,today.m,today.y);
}
