#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter index %d : ",i+0);
        scanf("\n%d",&arr[i]);}
        for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);}
        return 0;
}