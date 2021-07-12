#include<stdio.h>
#include<string.h>

typedef struct stduent
{
    int rollno;
    char  name[20];
    int age;
}id;
void main()
{
    id s1;
    s1.rollno=114;
    s1.age=18;
    printf("\nRoll no : %d",s1.rollno);
    printf("\nName : %s",strcpy(s1.name,"Dhruvil Dobariya"));
    printf("\nAge : %d",s1.age);
}
