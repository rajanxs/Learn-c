#include<stdio.h>
int main(){
    int n;
    printf("enter a no. : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            printf("prime number ");
            break;
        }
    }
    return 0;
}