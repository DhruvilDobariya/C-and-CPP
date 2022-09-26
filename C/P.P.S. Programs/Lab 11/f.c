#include<stdio.h>
int main()
{
    int n, a, sum = 0, i;

    printf("Enter a Number\n");
    scanf("%d", &n);
    for (i = 1; i <= (n - 1); i++)
    {
        a = n % i;
        if (a == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("Number is perfect number");
    else
        printf("Number is not a perfect number");
    return 0;
}
