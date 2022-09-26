#include<stdio.h>
void main()
{
    int bs;
    float gs,hra,da;

    printf("\n Enter your basic salary = ");
    scanf("%d",&bs);

    if(bs>=30000)
    {
        hra=(0.3*bs);
        da=(0.95*bs);
        gs=(bs+hra+da);

        printf("\n Gross salary is %f\n",gs);
    }

    if(bs>=20000 && bs<30000)
    {
        hra=(0.25*bs);
        da=(0.9*bs);
        gs=(bs+hra+da);

        printf("\n Gross salary is %f \n",gs);
    }

    if(bs>=10000 && bs<20000)
    {
        hra=(0.2*bs);
        da=(0.8*bs);
        gs=(bs+hra+da);

        printf("\n Gross salary is %f \n",gs);
    }

    if(bs<10000)
    {
        printf("\n Error \n");
    }
}
