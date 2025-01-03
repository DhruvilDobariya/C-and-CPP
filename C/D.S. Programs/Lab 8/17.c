#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100

void push(char item);
char pop();
int is_operator(char symbol);
int precedence(char symbol);
void InfixToPostfix(char infix_exp[], char postfix_exp[]);
char stack[SIZE];
int top = -1;

void main()
{
    char infix[SIZE], postfix[SIZE];
    int choice;

    printf("Please enter single letter variables and single digit constants only.\n");
    while(1)
    {
    printf("\n1 for Run program.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter Infix expression : ");
        scanf("%s",&infix);
        //gets(infix);
        InfixToPostfix(infix,postfix);
        printf("Postfix Expression: ");
        puts(postfix);
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}
void push(char item)
{
  if(top >= SIZE-1)
  {
    printf("\nStack Overflow.");
  }
  else
  {
    top = top+1;
    stack[top] = item;
  }
}
char pop()
{
  char item ;
  if(top <0)
  {
    printf("stack under flow: invalid infix expression");
    getchar();
    exit(1);
  }
  else
  {
    item = stack[top];
    top = top-1;
    return(item);
  }
}
int is_operator(char symbol)
{
  if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
  {
    return 1;
  }
  else
  {
  return 0;
  }
}
int precedence(char symbol)
{
  if(symbol == '^')
  {
    return(3);
  }
  else if(symbol == '*' || symbol == '/')
  {
    return(2);
  }
  else if(symbol == '+' || symbol == '-')
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
void InfixToPostfix(char infix_exp[], char postfix_exp[])
{
  int i, j;
  char item;
  char x;
  push('(');
  strcat(infix_exp,")");
  i=0;
  j=0;
  item=infix_exp[i];
  while(item != '\0')
  {
    if(item == '(')
    {
      push(item);
    }
    else if( isdigit(item) || isalpha(item))
    {
      postfix_exp[j] = item;
      j++;
    }
    else if(is_operator(item) == 1)
    {
      x=pop();
      while(is_operator(x) == 1 && precedence(x)>= precedence(item))
      {
        postfix_exp[j] = x;
        j++;
        x = pop();
      }
      push(x);
      push(item);
    }
    else if(item == ')')
    {
      x = pop();
      while(x != '(')
      {
        postfix_exp[j] = x;
        j++;
        x = pop();
      }
    }
    else
    {
      printf("\nInvalid infix Expression.\n");
      getchar();
      exit(1);
    }
    i++;
    item = infix_exp[i];
  }
  if(top>0)
  {
    printf("\nInvalid infix Expression.\n");
    getchar();
    exit(1);
  }
  if(top>0)
  {
    printf("\nInvalid infix Expression.\n");
    getchar();
    exit(1);
  }
  postfix_exp[j] = '\0';

}
