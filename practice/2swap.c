#include<stdio.h>
int main(){
    int i,j,k=0;
    printf("enter a number ");
    scanf("%d",&i);
    printf("enter a number ");
    scanf("%d",&j);
    k=i;
    i=j;
    j=k;
    printf("SWAP number is %d\n",i);
    printf("second swap number is %d",j);
    return 0;
}