/*Create a structure employee (id, name, salary). Accept details of n 
employees and find the details of employee having maximum salary. 
Write separate function. */

#include<stdio.h>
#include<stdlib.h>

    struct emp
    {
        int id;
        char name[20];
        float sal;
        
    }e1[1000];

int main()
{
    void max(struct emp e1[1000],int n);
    int i,n,ch;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Id name salary:");
        scanf("%d%s%f",&e1[i].id,&e1[i].name,&e1[i].sal);
    }
    max(e1,n);
}    
 void max(struct emp e1[1000],int n)
 {
    int i,index=0;
     for(i=0;i<n;i++)
    {
        if(e1[i].sal>e1[i-1].sal)
        index=i;
    }
    printf("\nEmp having max salary:");
    printf(" Id = %d \tName = %s \tsalary=%.2f",e1[index].id,e1[index].name,e1[index].sal);
 }