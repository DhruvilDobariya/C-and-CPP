#include<stdio.h>
#define PI 3.14

float areafirst(int r);
float areasecond(int r);
void main()
{
    int r;
    float A1,A2;

    printf("\nEnter r : ");
    scanf("%d",&r);
    A1=areafirst(r);
    A2=areasecond(r);
    printf("\nAnswer is %.2f",A1);
    printf("\nAnswer is %.2f",A2);
}
float areafirst(int r1)
{
    float a1;
    a1=PI*(r1*r1);
    return (a1);
}
#undef PI
float areasecond(int r2)
{
    float a2;
    /*a2=PI*r*r; This is error because #undef PI.*/
    a2=3.14*(r2*r2);
    return (a2);
}
