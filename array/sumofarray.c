#include<stdio.h>
int main(){
    int boys[4]={4,6,8,12};
    int sum =0;
    for(int i=0;i<=3;i++){
        sum =sum +boys[i];}
       printf("the sum of all array element is %d",sum);
       return 0;
}