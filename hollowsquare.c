#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         if(i==0 || i==n-1)
         {
            for(j=0;j<n;j++)
             {
                 printf("* ");
             }
        }
        else
        {
            printf("* ");
            for(k=0;k<n-2;k++)
            {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }
}