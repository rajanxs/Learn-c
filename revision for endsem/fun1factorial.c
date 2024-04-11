#include<stdio.h>
fac(int n,int fact){
    for(int i=0;i<=n;i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}
int main(){
    int n,fact=1;
    printf("enter a number ");
    scanf("%d",&n);
    int factorial = fac(n,fact);

}