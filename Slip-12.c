/*Write a C program to create a structure named book (book_name, 
author_name and price) and display all book details having price > ____ 
in a proper format by passing the structure array as function argument. */
#include<stdio.h>
#include<stdlib.h>

    struct book
    {
        char bname[10],aname[10];
        float price;
    }b[100];
    
int main()
{
    
    void display(struct book b[100],int n);
    int i,n;
    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter book_name,author_name and price ");
        scanf("%s%s%f",&b[i].bname,&b[i].aname,&b[i].price);
    }
    display(b,n);
}
void display(struct book b[100],int n)
{
    printf("Price greater than 451");
    printf("Bname\tAname\tPrice");
    printf("\n-------------------\n");
 for(int i=0;i<n;i++)
 {
    if(b[i].price>451)
    {
        printf("%s\t%s\t%f",b[i].bname,b[i].aname,b[i].price);
    }
 }
}
