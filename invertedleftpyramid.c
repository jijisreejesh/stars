#include<stdio.h>
int main(){
    int i,j,a,k;
    printf("Enter the limit : ");
    scanf("%d",&a);
     for(i=0;i<a;i++){
        for(k=0;k<i+1;k++)
        {
            printf("\t");
        }
        for(j=i;j<a;j++){
        printf("*\t");
        }
        printf("\n");
     }
    return 0;
}