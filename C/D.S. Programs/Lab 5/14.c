#include<stdio.h>
#include<stdlib.h>

struct STUDENT_DETAIL
{
    int Enrollment_no;
    char Name[100];
    float spi,cpi;
};
void main()
{
    struct STUDENT_DETAIL s[5];
    int i,choice;

    while(1)
    {
    printf("\n1 for Enter your detail.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        for(i=0;i<5;i++)
        {
            printf("\nEnter name of student no %d(without spec) : ",i+1);
            scanf("%s",&s[i].Name);
            printf("\nEnter enrollment no of student no %d : ",i+1);
            scanf("%d",&s[i].Enrollment_no);
            printf("\nEnter spi of student no %d : ",i+1);
            scanf("%f",&s[i].spi);
            printf("\nEnter cpi of student no %d : ",i+1);
            scanf("%f",&s[i].cpi);
        }
        for(i=0;i<5;i++)
        {
            printf("\nName of student no %d : %s",i+1,s[i].Name);
            printf("\nEnrollment no of student no %d : %d",i+1,s[i].Enrollment_no);
            printf("\nSpi of student no %d : %0.2f",i+1,s[i].spi);
            printf("\ncpi of student no %d : %0.2f",i+1,s[i].cpi);
            printf("\n");
        }
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}

