#include <stdio.h>
#include <string.h>

void main()
{
    char a[1000],b[1000],c[2000];
    int i,s,t;

    printf("Enter the String: ");
    gets(a);
    printf("Enter the String: ");
    gets(b);
    s=strlen(a);
    t=strlen(b);
    printf("Length of Str is %d %d", strlen(a),s);
    printf("\nLength of Str is %d %d", strlen(b),t);

    for(i=0;i=s;i++)
    {
       a[i]=c[i];
    }
    for(i=s+1;i=t;i++)
    {
       b[i]=c[i];
    }
    printf("\nAnswer is : %s",c);
}

