#include<stdio.h>

struct book input();
void display(struct book );
struct book
{
    int bookid;
    char bookname[20];
    float price;
};
void main()
{
    struct book b1;

    b1=input();
    display(b1);
}
struct book input()
{
    int i;
    struct book b;
    printf("\nEnter book id ,name and price : ");
    scanf("%d",b.bookid);
    fflush(stdin);
    gets(b.bookname);
    scanf("%f",b.price);
    return b;
}
void display(struct book b)
{
    printf("\nBook's id : %d,Book's name : %s,Book's price : %.2f");
}
