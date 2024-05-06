/*A Write a program to create a structure employee (id, name, salary). Accept 
details of n employees and write a menu driven program to perform the 
following operations. 
i) Search by name 
ii) Display all */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    struct emp
    {
        int id;
        char name[20];
        float sal;
    }e[1000];

    int i,n,ch,in,f=0;
    char na[20];
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Id name salary:");
        scanf("%d%s%f",&e[i].id,&e[i].name,&e[i].sal);
    }
    do
    {
        printf("\n1-Search by name\n2-Display all:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter name to search:");
                   scanf("%s",&na);
                    printf("\nId\tName\tsalary");
                    printf("\n------------------");
                  for(i=0;i<n;i++)
                    {
                      if(strcmp(na,e[i].name)==0)
                     { 
                       in=i;
                       f=1;
                       
                     }
                    }
                    if(f==1)
                     printf("\n%d\t%s \t%f",e[in].id,e[in].name,e[in].sal);
          
                   break;
            case 2:printf("\nId\tName\tsalary");
                    printf("\n------------------");
                  for(i=0;i<n;i++)
                    {
                      printf("\n%d\t%s \t%f",e[i].id,e[i].name,e[i].sal);
                    }
                   break;
            case 3:exit(0);
            default:printf("Invalid choice:");
       }
    }while(ch!=3);
}