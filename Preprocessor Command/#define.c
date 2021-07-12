#include<stdio.h>
#define product(a,b) a*b
#define pro(c,d) (c)*(d)

void main()
{
    printf("\nProduct of %d and %d is %d",2,4,product(2,4));
    printf("\nProduct of %d and %d is %d",2,4,product(2+2,4-1));
    /*printf("\nProduct of %d and %d is %d",2,4,product((2+2),(4-1)); This is error.*/
    printf("\nProduct of %d and %d is %d",2,4,pro(2+2,4-1));
}
