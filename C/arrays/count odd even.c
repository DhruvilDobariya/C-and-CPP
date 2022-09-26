#include<stdio.h>
void main()
{
    int i,a[10];
    int even=0,odd=0;

    for(i=0;i<10;i++)
    {
        printf("\n Enter any number : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even=even+1;
        else
            odd=odd+1;
    }

    printf(" Even = %d , Odd = %d",even,odd);
}
