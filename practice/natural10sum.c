#include<stdio.h>
int main(){
    int i,sum;
    for(i=1;i<=10;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("\n%d",sum);
    return 0;
}