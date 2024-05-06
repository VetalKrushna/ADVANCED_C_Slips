/*A Write a program to perform the following operations on strings using user
defined functions:
a. Length of string
b. Copy one string to another
c. Convert string to uppercase*/
#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int i,j;
    printf("Enter Ist string: ");
    gets(s1);
    printf("Enter IInd string: ");
    gets(s2);
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++);
    printf("\nLength of Ist string:%d",i);
    printf("\nLength of IIst string:%d",j);
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }s1[i]='\0';
    printf("\nCopied string:%s",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(islower(s1[i]))
       s1[i]=toupper(s1[i]);

    }
printf("\nUppercase string:%s",s1);

    
    
}