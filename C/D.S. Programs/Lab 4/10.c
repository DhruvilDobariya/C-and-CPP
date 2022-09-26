#include<Stdio.h>

void main()
{
    int a[100],i,n,*p;
    p=&a;

    printf("\nEnter value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value of element no.%d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*p+i);
    }
}
