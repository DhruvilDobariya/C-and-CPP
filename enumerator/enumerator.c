#include<stdio.h>

enum fun even(int n);
enum fun
{
    false,true
};
enum fun even(int n)
{
    if(n%2==0)
        return (true);
    else
        return (false);
}
void main()
{
    int n;
    enum fun result;

    printf("\nEnter value of n : ");
    scanf("%d",&n);

    result=even(n);
    if(result==true)
        printf("\n%d number is even.",n);
    else
        printf("\n%d number is odd.",n);
}
