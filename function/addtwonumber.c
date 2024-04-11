#include<stdio.h>
int sum(int a,int b);
int main(){
    int a=10,b=20,c;
    c=sum(a,b);
    printf("%d ",c);
}
int sum(int a,int b){
return a+b;
}
