/*A A file “student.txt” contains rollno, name and total_marks. Write a
program to read this file to display all student details on screen.
*/
#include<stdio.h>
int main()
{
     FILE *f1;
     char ch;
     f1=fopen("Student.txt","r");
     while(!feof(f1))
     {
        ch=fgetc(f1);
        printf("%c",ch);
     }
}