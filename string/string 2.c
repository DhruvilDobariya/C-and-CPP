#include<stdio.h>
void main()
{
    char a[4][10];
    int i;

    printf("\n Enter your name : ");
    for(i=0;i<=3;i++)
        gets(a[i]);

    for(i=0;i<=3;i++)
        puts(a[i]);
}
