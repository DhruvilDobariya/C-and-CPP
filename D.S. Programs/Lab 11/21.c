# include<stdio.h>
# define 10 5

int q[10];
int f = -1;
int r = -1;


void insert(int item)
{
	if((f == 0 && r == 10-1) || (f == r+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (f == -1)  
	{
		f = 0;
		r = 0;
	}
	else
	{
		if(r == 10-1)	
			r = 0;
		else
			r = r+1;
	}
	q[r] = item ;
}

void del()
{
	if (f == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",q[f]);
	if(f == r) 
	{	
		f = -1;
		r=-1;
	}
	else
	{	
		if(f == 10-1)
			f = 0;
		else
			f = f+1;
	}
}

void display()
{
	int f_pos = f,r_pos = r;
	if(f == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( f_pos <= r_pos )
		while(f_pos <= r_pos)
		{
			printf("%d ",q[f_pos]);
			f_pos++;
		}
	else
	{
		while(f_pos <= 10-1)
		{
			printf("%d ",q[f_pos]);
			f_pos++;
		}
		f_pos = 0;
		while(f_pos <= r_pos)
		{
			printf("%d ",q[f_pos]);
			f_pos++;
		}
	}
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &item);

				insert(item);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
	}while(choice!=4);
	
	return 0;
}