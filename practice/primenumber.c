#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        n%i==0;
        printf("composite ");
        break;
    }
    return 0;
}