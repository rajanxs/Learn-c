#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    else if(n=3) return n+1;
    else  {
    int totalways= stair(n-1) + stair(n-2) + stair(n-3);
    return totalways;}
    }
    int main(){
        int n;
       printf("enter the no: ");
       scanf("%d",&n);
       int ways= stair(n);
       printf("%d", ways);
       return 0;
    }