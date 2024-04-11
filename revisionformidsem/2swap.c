#include<stdio.h>
int main(){
    int a=4,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("1st swap is %d\n",a);
    printf("2nd swap is %d",b);
    return 0;
}