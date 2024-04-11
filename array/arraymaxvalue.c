#include<stdio.h>
int main(){
    int arr[5]={2,5,14,4,9};
    int n=0;
    for(int i=0;i<5;i++){
        if(arr[i]>n){
            n=arr[i];}
            }
            printf("%d  ",n);
    return 0;
}