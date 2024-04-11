//not swap
#include<stdio.h>
void swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int b;
    printf("enter a number ");
    scanf("%d",&b);
    swap(a,b);
    printf("after swap %d\n",a);
    printf("after swap %d",b);
    return 0;
}