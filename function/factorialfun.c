#include<stdio.h>
int fact(int a){
    //int a;
    int fact =1;
    for(int i=1;i<=a;i++){
        fact =fact *i;
    }
    return fact;
}
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int c= fact(a);
    printf("%d",c);
    return 0;
}