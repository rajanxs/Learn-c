#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
    return ;
}
int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    int b;
    printf("Enter a  number ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value swap is %d\n",a);
    printf("the value swap is %d",b);
    return 0;
}