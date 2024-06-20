#include<stdio.h>
void main(){
    int i,j,k,a;
    printf("Enter the limit : ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=i;j<k;j++)
        {
                printf("\t");
        }
        for(a=0;a<=i;a++)
        {
                printf("*\t");
        }
        printf("\n");
    }
 }