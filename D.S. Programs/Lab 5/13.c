#include<stdio.h>
#include<stdlib.h>

struct Employee_Detail input();
void display(struct Employee_Detail s2);
struct Employee_Detail
{
    int Employee_id,Salary;
    char Name[100],Designation[100];

};
void main()
{
    struct Employee_Detail s;
    int choice;

    while(1)
    {
    printf("\n1 for Enter your detail.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        s=input();
        display(s);
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}
struct Employee_Detail input()
{
    struct Employee_Detail s1;

    printf("\nEnter your name : ");
    scanf("%s",&s1.Name);
    printf("\nEnter your designation : ");
    scanf("%s",&s1.Designation);
    printf("\nEnter your employee id : ");
    scanf("%d",&s1.Employee_id);
    printf("\nEnter your salary : ");
    scanf("%d",&s1.Salary);
    return (s1);
}
void display(struct Employee_Detail s2)
{
    printf("\nName : %s",s2.Name);
    printf("\nDesignation : %s",s2.Designation);
    printf("\nEmployee id : %d",s2.Employee_id);
    printf("\nSalary : %d",s2.Salary);
    printf("\n");
}
