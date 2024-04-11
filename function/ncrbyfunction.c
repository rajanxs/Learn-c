#include<stdio.h>
int factorial(){
    int a =5;
    int fact=1;                                 ///wrong 
    for(int i=2;i<=a;i++)
    fact=fact*i;
    return 0;
}
int main(){
    int n,r;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r: ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    
    printf("The factorial is : %d",nfact);
    return 0;
}