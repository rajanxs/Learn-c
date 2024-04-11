#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter index %d : ",i+0);
        scanf("\n%d",&arr[i]);}
        printf("The third index is : %d",arr[2]);
        return 0;
}