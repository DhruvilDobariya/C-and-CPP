#include<stdio.h>
void main()
{
    int i=1,n;

    printf("\n Enter value of number = ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("\n %d \n",i);
        }
        i++;
    }
}
