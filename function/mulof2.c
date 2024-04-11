#include<stdio.h>
int prod(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);
    printf("enter a number : ");
    scanf("%d",&b);
    int res = prod(a,b);
    printf("%d",res);
    return 0;
}