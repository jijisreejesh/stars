#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter the rows  :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("* ");           
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i+1;j++)
        {
            printf(" ");
        }
        for(k=i;k<n-1;k++)
        {
            printf("* ");           
        }
        printf("\n");
    }
}