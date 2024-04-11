#include<stdio.h>
int fact(int n){
    int fac=1;
    for(int i=0;i<=n;i++){
        fac=fac*i;
        printf("%d",fac);
        return 0;
    }
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int fact(n);
    return 0;
}