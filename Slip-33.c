/*Write a program to read the contents of a text file and count the number of 
characters, lines and words in the file. */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
   FILE *f1;
   char ch;
   int c1=0,c2=0,c3=0;
   f1=fopen("Student.txt","r");
   if(f1==NULL)
   {
    printf("File does not exist..");
    exit(0);
   }
   while(!feof(f1))
   {
    ch=fgetc(f1);
    if(isalpha(ch))
      c1++;
    else if(ch==' ')  
     c2++;
    else if(ch=='\n') 
     c3++;
   }
   fclose(f1);
   printf("\nCharacter Count:%d",c1);
   printf("\nWord Count:%d",c2);
   printf("\nLine Count:%d",c3);
} 