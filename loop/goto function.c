#include<stdlib.h>
void main()
{
    //Variable:
    retry:
    //Program:
    printf("\n\n Enter 1 for retry");
    printf("\n Enter any number(Except 1) for end program. \n");
    scanf("%d",&a);
    if(a==1)
        goto retry;
    else
        exit(0);
}
