#include<stdio.h>
void main()
{
    int i=1,x;

    while(i<=5)
    {
        printf("\n Enter any number = ");
        scanf("%d",&x);
        if(x>0)
            break;
        i++;
    }
    i==6?printf("\n Ends normally \n"):printf("\n Applied break \n");
}
