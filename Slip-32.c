/*A Accept details of n students (roll no, name, percentage) using structure. 
Write a menu driven program for the following: 
a. Display all students 
b. Display all students having percentage > ___ */
#include<stdio.h>
struct Student
{
    int rno;
    char name[20];
    float per;
}s[100];
int main()
{
    void displayall(struct Student s[100],int n);
    void disp(struct Student s[100],int n);
    int n,i,ch;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter roll no name percentage:");
        scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
    }
     do
     {
        printf("\n\n1-Disaplay all\n2-Percentage>70:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:displayall(s,n);
                   break;
            case 2:disp(s,n);
                   break;
            case 3:exit(0);
            default:printf("Invalid case");              
        }
     }while(ch!=3);

}

void displayall(struct Student s[100],int n)
{
    printf("\nRoll no\tName\tPercentage");
    printf("\n--------------------------\n");
 for(int i=0;i<n;i++)
   {
        printf("%d\t%s\t%2.2f\n",s[i].rno,s[i].name,s[i].per);
    }
 
}

void disp(struct Student s[100],int n)
{
     printf("\nRoll no\tName\tPercentage");
    printf("\n---------------------------\n");
 for(int i=0;i<n;i++)
   {
    if(s[i].per>70)
        printf("%d\t%s\t%f\n",s[i].rno,s[i].name,s[i].per);
    }
}
