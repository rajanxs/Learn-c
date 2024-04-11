#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(n%5==0 && n%7==0){
        printf("divisible by both");
    }
    else{
        printf("not divisible");
    }
    return 0;
}