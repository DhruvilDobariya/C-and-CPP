#include<stdio.h>
#include<string.h>
int stack[20];
int top = -1;
void push(int x)
{
	stack[++top] = x;
}
int pop()
{
	return stack[top--];
}
int main()
{
	char exp[20];
	char *e;
	int n1,n2,n3,num,choice,i;
	while(1)
	{
		printf("\n1 for Run program.");
		printf("\n2 for exit.");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("Enter the expression : ");
			scanf("%s",exp);
			e = exp;
			for(i=e-1;i>=0;i++)
			{
				if(isdigit(*e))
				{
					num = *e - 48;
					push(num);
				}
				else
				{
					n1 = pop();
					n2 = pop();
					switch(*e)
					{
						case '+':
						{
							n3 = n1 + n2;
							break;
						}
						case '-':
						{
							n3 = n2 - n1;
							break;
						}
						case '*':
						{
							n3 = n1 * n2;
							break;
						}
						case '/':
						{
							n3 = n2 / n1;
							break;
						}
					}
					push(n3);
				}
			}
			printf("\nThe Answer of expression %s = %d\n\n",exp,pop());
			break;
			case 2:
			exit(0);
			break;
			default:
			printf("\nInvalid input.\n");
		}
	}
	return 0;
}