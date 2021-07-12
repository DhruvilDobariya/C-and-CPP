#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char str[20];
    int choice;

    while(1)
    {
    printf("\n1 for Enter new string.");
    printf("\n2 for exit.");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    printf("\n");

    switch(choice)
    {
    case 1:
        printf("Enter a string of ab: ");
        scanf("%s",str);

        int i=0,countA=0;

        while(str[i]!='b')
        {
            countA++;
            i++;
        }
        if(countA==strlen(str)-countA)
            printf("\nValid String\n");
        else
            printf("\nInvalid String\n");
        break;
    case 2:
        exit(0);
        break;
    default:
        printf("\nInvalid input.\n");
    }
    }
}
