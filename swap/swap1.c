#include<stdio.h>
int main(){
    int n,m;
    printf("enter first number : ");
    scanf("%d",&n);
    printf("enter second number : ");
    scanf("%d",&m);
    printf("first swap number is %d\n",(n+m)-n);
    printf("second swap number is %d",(m+n)-m);
    return 0;
}