#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st a number  : ");
    scanf("%d",&a);
    printf("enter 2nd number : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap :%d\n",a);
    printf("after swap : %d",b);
    return 0;

}