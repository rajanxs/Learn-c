#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter first number : ");
    scanf("%d",&x);
    printf("enter second number : ");
    scanf("%d",&y);
    z=x;x=y;y=z;
    printf("first swap number is :  %d\n",x);
    printf("second swap number is :  %d",y);
    return 0;
}