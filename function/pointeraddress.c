#include<stdio.h>
int main(){
    int a=2;
    int* x=&a;
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);
    return 0;
}