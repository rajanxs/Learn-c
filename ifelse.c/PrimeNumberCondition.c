#include <stdio.h>
int main(){
    int n,a=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=2;i<=n-2;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==1){
        printf("The number %d is composite",n);
    }
    else if (n==1){
        printf("The number %d is neither prime nor composite",n);
    }
    else if (a==0){
        printf("The number %d is prime",n);
    };
    return 0;

}