/* Write a program to accept ‘n’ employee details (eno, ename, salary) and 
display all employee details whose salary is more than 10000, by passing 
array of structure to the function.*/

#include<stdio.h>
 struct employee
 {
    int eno;
    char ename[20];
    float sal;
 }e[100];

int main()
{
    void disp(struct employee e[100],int n);
   int n,i;
   printf("Enter limit:");
   scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter no:");
        scanf("%d",&e[i].eno);
        printf("Enter name:");
        scanf("%s",&e[i].ename);
        printf("Enter salary:");
        scanf("%f",&e[i].sal);
    }
    disp(e,n);
}

void disp(struct employee e[100],int n)
{
    printf("\nEmployee greater than 10000 salary:");
    for(int i=0;i<n;i++)
    {
        if(e[i].sal>10000)
        {
            printf("\nEmpolyee no:%d\nEmployee name:%s\nEmployee salary:%f",e[i].eno,e[i].ename,e[i].sal);
        }
    }
}




