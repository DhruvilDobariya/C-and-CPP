#include<stdio.h>
void main()
{
    int i,a[10];
    int sum=0,higher=0,smaller=0,same=0;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("\n Enter any number : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }

    avg=(float)sum/10;

    for(i=0;i<10;i++)
    {
        if(avg<a[i])
            higher=higher+1;
        else if(avg>a[i])
            smaller=smaller+1;
        else
            same=same+1;
    }

    printf("\n Avg = %0.2f",avg);
    printf("\n Higher number = %d , Smaller number = %d , Same number = %d",higher,smaller,same);
}
