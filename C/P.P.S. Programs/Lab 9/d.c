#include<stdio.h>
void main()
{
    int a,b;

    printf("\n Enter small number = ");
    scanf("%d",&a);
    printf("\n Enter large number = ");
    scanf("%d",&b);

    while(a<=b)
    {
        if(a%2==0 && a%3!=0)
        {
            printf("\n %d \n",a);
        }

        a++;
    }
}
