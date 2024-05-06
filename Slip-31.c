/*A Write a menu driven program to perform the following operations on 
strings using user defined functions: 
 i)Length
 ii)Copy */
#include<stdio.h>
int main()
{
    int i,ch;
    char s[20],s1[20];
    printf("Enter string:");
    scanf("%s",s);
    do
    {
        printf("\n\n1-Length\n2-copy:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:for(i=0;s[i]!='\0';i++);
                   printf("\n Length of strinf:%d",i);
                   break;
            case 2:for(i=0;s[i]!='\0';i++)
                   {
                    s1[i]=s[i];
                   }  s1[i]='\0'; 
                   printf("Copied string:%s",s1);   
                   break; 
            case 3:exit(0);
            default:printf("Invalid choice:");
        }
    }while(ch!=3);
}