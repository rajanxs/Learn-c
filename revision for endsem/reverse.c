#include<stdio.h>
int main(){
    int n;
    printf("enter a numbner ");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        rev=n%10;
        printf("%d",rev);
        n=n/10;
    }
    return 0;
}
