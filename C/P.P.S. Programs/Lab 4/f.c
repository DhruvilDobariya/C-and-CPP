#include<stdio.h>
void main()
{
    int k,m,c,f,i;

    printf("\n Enter velue of distance in km = ");
    scanf("%d",&k);

    m=(1000*k);
    c=((1000*k)*100);
    f=(((1000*k)*100)/30);
    i=(((1000*k)*100)/2.54);

    printf("\n Answer in meter = %d",m);
    printf("\n Answer in centimeter = %d",c);
    printf("\n Answer in feet = %d",f);
    printf("\n Answer in inch = %d\n",i);


}
