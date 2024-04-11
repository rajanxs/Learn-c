#include<stdio.h>
int main(){
int a,b,z;
printf("enter a number ");
scanf("%d",&a);
printf("enter a numberv ");
scanf("%d",&b);
z=a;
a=b;
b=z;
printf("after swap %d\n",a);
printf("afterv swap %d",b);
return 0;
}