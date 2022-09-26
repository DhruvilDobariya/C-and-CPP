#include<stdio.h>

int main()
{
    int i,N;
	float sum,a;

	printf("Enter the value of N: ");
	scanf("%d",&N);

	sum=0.0f;

	for(i=1;i<=N;i++)
    {
        a=(1/i);
        sum = sum + a;
    }

	printf("Sum of the series is: %f\n",sum);

	return 0;
}
