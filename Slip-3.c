/*Q 1) A Write a program to declare a structure person (name, address) which 
contains another structure birthdate (day, month, year). Accept the details 
of n persons and display them. 
*/
#include<stdio.h>
#include<stdlib.h>
 struct person
 {
    char name[20],addr[30];
    struct bdate
    {
        int d,m,y;
    }b;
 }p[100];
int main()
{
    int n,i;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Name Address and Date in DD-MM-YYYY formate:");
        scanf("%s%s%d%d%d",&p[i].name,&p[i].addr,&p[i].b.d,&p[i].b.m,&p[i].b.y);
    }
     printf("\n Name Address  Birthdate ");
     printf("\n-------------------------");
    for(i=0;i<n;i++)
    {
       
        printf("\n %s\t%s\t%d/%d/%d",p[i].name,p[i].addr,p[i].b.d,p[i].b.m,p[i].b.y);
    }
}