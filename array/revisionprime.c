#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        printf("the number is composite ");
        break;}}
//          else
//           printf("The number is prime ");
//            }
       return 0;
}