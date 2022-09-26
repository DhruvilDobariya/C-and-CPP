#include<stdio.h>

union item
{
    int x;
    float y;
    char z;
};
int main()
{
    union item i1;

    i1.x=21;
    printf("\nx=%d\n",i1.x);
    i1.y=20.50;
    printf("\nx=%d",i1.x);
    printf("\ny=%f\n",i1.y);
    i1.z='a';
    printf("\nx=%d",i1.x);
    printf("\ny=%f",i1.y);
    printf("\nz=%c",i1.z);
    return 0;
}
