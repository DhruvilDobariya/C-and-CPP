#include<stdio.h>

int main()
{
	int x,i,c;
	int a;

	printf("\nEnter any number : ");
	scanf("%d",&x);
	c=0;
	for(i=1;i<=x;i++)
	{
		if (x%i==0)
		{
			c++;
		}
	}
	if (c==2)
	{
		printf("\nThis is prime number.");
	}
	else
	{
		printf("\nThis is not prime number.");
	}
	return 0;
}
