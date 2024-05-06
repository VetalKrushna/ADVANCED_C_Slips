/*A Write a function which accepts a number and three flags as parameters if 
number is even set first flag to 1. If number is prime set second flag to 1
and if number is divisible by 3 or 7 set the third flag to 1(pass addresses of 
flags to the function.)*/

#include<stdio.h>
void check(int *f1,int *f2,int *f3,int n)
{
    if(n%2==0)
      *f1=1;
       
     for(int i=2;i<n;i++)
     {
        if(n%i!=0)
          *f2=1;
     }  

     if(n%3==0 || n%7==0)
      *f3=1;
}

int main()
{
    int f1=0,f2=0,f3=0,n;
     printf("Enter number:");
     scanf("%d",&n);
      check(&f1,&f2,&f3,n);
     if(f1==1)
      printf("\nNo is Even");
     else 
      printf("\nNo is Odd") ;

     if(f2==1)
      printf("\nNo is Prime");
     else 
      printf("\nNo is not Prime");

      if(f3==1) 
       printf("\nNo is divisible by 3 or 7");
      else
       printf("\nNo is not divisible by 3 or 7");     
}