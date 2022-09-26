#include<stdio.h>
void main()
{
    int bs;
    float gs,hra,da;

    printf("\n Enter your basic salary = ");
    scanf("%d",&bs);

    if(bs>=10000)
    {
        if(bs>=10000 && bs<20000)
        {
            da=(0.8*bs);
            hra=(0.2*bs)+da;
            gs=(bs+hra+da);

            printf("\n Gross salary is %f \n",gs);
        }
        else
        {

            if(bs>=20000 && bs<30000)
            {
                da=(0.9*bs);
                hra=(0.25*bs)+da;
                gs=(bs+hra+da);

                printf("\n Gross salary is %f \n",gs);
            }
            else
            {
                da=(0.95*bs);
                hra=(0.3*bs)+da;
                gs=(bs+hra+da);

                printf("\n Gross salary is %f\n",gs);
            }
        }
    }
    else
    {
        printf("\n Error \n");
    }
}
