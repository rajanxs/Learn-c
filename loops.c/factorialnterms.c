#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int factorials =1 ;
    for(int i=1;i<=n;i++){
        factorials = factorials*i;}
    printf("%d",factorials);
    return 0;
}