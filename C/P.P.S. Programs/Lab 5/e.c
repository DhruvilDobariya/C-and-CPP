#include<stdio.h>
void main()
{
    int a,b,c,d;



        printf("\n 1. Addition");
        printf("\n 2. Substrection");
        printf("\n 3. multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");

        printf("\n Enter your choice : ");
        scanf("%c",&c);

        switch(c)
        {
            case 1:
                    printf("\n Enter first number = ");
                    scanf("%d",&a);
                    printf("\n Enter second number = ");
                    scanf("%d",&b);

                    d=a+b;

                    printf("\n %d + %d = %d",a,b,d);

                    break;

            case 2:
                    printf("\n Enter first number = ");
                    scanf("%d",&a);
                    printf("\n Enter second number = ");
                    scanf("%d",&b);

                    d=a-b;

                    printf("\n %d - %d = %d",a,b,d);

                    break;

            case 3:
                    printf("\n Enter first number = ");
                    scanf("%d",&a);
                    printf("\n Enter second number = ");
                    scanf("%d",&b);

                    d=a*b;

                    printf("\n %d * %d = %d",a,b,d);

                    break;

            case 4:
                    printf("\n Enter first number = ");
                    scanf("%d",&a);
                    printf("\n Enter second number = ");
                    scanf("%d",&b);

                    d=a/b;

                    printf("\n %d / %d = %d",a,b,d);

                    break;

            case 5: exit(0);

            default:

                    printf("\n Invalid choice");

        }

}
