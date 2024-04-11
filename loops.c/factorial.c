#include<stdio.h>
int main(){
    int fact =1;
    for(int i=1;i<=6;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",6,fact);
    return 0;
}