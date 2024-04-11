#include<stdio.h>
int main(){
    int i,n,j;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<2*n-1;i=i+2){
        for(j=1;j<2*n-1;j=j+2){
        printf("%d ",j);}
        printf("\n");
    }
    return 0;
}
