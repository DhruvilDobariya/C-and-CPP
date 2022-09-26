#include<stdio.h>
#include<stdlib.h>

struct noad
{
    int info;
    struct noad *link;
};
struct noad *START=NULL;
struct noad *creat()
{
    struct noad *n;

    n=(struct noad *)malloc(sizeof(struct noad));
    return (n);
}
void insert()
{
    struct noad temp,t;

    printf("\nEnter number : ");
    scanf("%d",&temp.info);
    temp.link=NULL;
    if(START==NULL)
        START=NULL;
    else
    {
        t=START;
        while(t.link!=NULL)
            t=t.link;
        t.link=temp;
    }
}
void main()
{

}
