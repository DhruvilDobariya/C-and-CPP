#include<stdio.h>
int main()
{
    int n,sum;

    printf("Want some up to N terms?\nEnter the N term:");
    scanf("%d", &n);

    if (n % 2 == 0)
        sum=(-(n / 2));
    else
        sum=((n + 1) / 2);

    printf("Sum is:%d", sum);

    return 0;
}
