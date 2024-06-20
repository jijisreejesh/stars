#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            for(j=n;j>i;j--)
            {
                printf(" ");
            }
            if(i==0)
             printf(" *");
            else if(i==n-1)
            {
                for(j=0;j<n;j++)
                {
                     printf("* ");
                }
            }
            else
            {
             printf("*");
                for(j=0;j<i;j++)
                {
                    printf("  ");
                }
                 printf("*");
              
            }
               printf("\n");
    }
}