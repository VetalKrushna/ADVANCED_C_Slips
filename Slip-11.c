/*Write a program to accept details of n employees (id, name, salary). 
Display all the details. Also, search for an employee by name. */
#include<stdio.h>
struct Emp
{
    int id;
    char name[20];
    float sal;
}s[100];
int main()
{
    int i,n,c;
    char s1[20];
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter ID Name Salary:");
        scanf("%d%s%f",&s[i].id,&s[i].name,&s[i].sal);
    }
     printf("\n ID Name Salary");
     printf("\n----------------");
     for(i=0;i<n;i++)
    {
       
        printf("\n%d   %s  %f",s[i].id,s[i].name,s[i].sal);
    }
    printf("\nEnter name for search:");
    scanf("%s",s1);
    printf("%s ",s1);
    
   for(i=0;i<n;i++)
    {
         if(s[i].name==s1)
         i++;
         break;
    }
      if(i==n)
      printf("not found");
     
      else  printf("\nFOUND");
}