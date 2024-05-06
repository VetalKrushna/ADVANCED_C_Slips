/*Write a program to add two matrices and display the result. Use dynamic 
memory allocation. 
*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *a[20],*b[20],m,n,i,j;
    printf("Enter no of row and col:");
    scanf("%d%d",&m,&n);
    printf("Enter I Matrix:\n");
    for(i=0;i<m;i++)
    {
        a[i]=(int *) malloc(j*sizeof(int));
        for(j=0;j<n;j++)
        {
            scanf("%d",a[i]+j);
        }
    }
     printf("Enter II Matrix:\n");
     for(i=0;i<m;i++)
    {
        b[i]=(int *) malloc(j*sizeof(int));
        for(j=0;j<n;j++)
        {
            scanf("%d",b[i]+j);
        }

    }
    printf("I matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nII matrix:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}