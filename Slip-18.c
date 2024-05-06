/*A Write a menu driven program using standard library function
• To find Length of string
• To compare two strings
• To copy one string to other.
• To concatenate two strings*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
     int ch,k;
     char s1[10],s2[10];
     printf("Enter 1st string:");
     gets(s1);
     printf("Enter 2nd string:");
     gets(s2);
      do{
 printf("\n1-To find Length of string \n2-To compare two strings\n3-To copy one string to other.");
 printf("\n4-To concatenate two strings \n5-exit");
 printf("\n Enter choice:");
 scanf("%d",&ch);

 switch(ch)
  {
    case 1:printf("\nLength of 1st string:%d",strlen(s1));
           printf("\nLength of 2nd string:%d",strlen(s2));
            break;
    case 2:k=strcmp(s1,s2);
           if(k==1)
             printf("\n1st string is greatest string");
           else if(k==0)  
            printf("\nBoth string are equal");
           else if(k==-1)  
            printf("\n2nd string is greatest string");
            break;
    case 3:printf("\nCopied string:%s",strcpy(s1,s2));
            break;
    case 4:printf("\nConcatnated string:%s",strcat(s1,s2));
            break;
    case 5:exit(0);
            
   }
 }while(ch!=5);
     
}