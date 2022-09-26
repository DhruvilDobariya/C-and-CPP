#include<stdio.h>
void main()
{
    int a,b,c=0,i;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    for (i = 1; i <= a; i++)
    {
        b=a%i;
        if (b==0)
        {
            c++;
        }
        
    }
    if (c==2)
    {
        printf("%d is a prime number.",a);
    }
    else
    {
        printf("%d isn't prime number.",a);
    }
    

}