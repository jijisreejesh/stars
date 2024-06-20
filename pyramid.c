#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n,x,y;
     printf("Enter the limit : ");
    scanf("%d",&n);
    x=n;y=n;
    for(i=0;i<n;i++)
    {
        for(j=x-1;j>0;j--)
        {
                printf(" ");
        }
        for(k=0;k<=i;k++)
        {
                printf("* ");
        }
        printf("\n");
        x--;
    }
}