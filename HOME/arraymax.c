#include<stdio.h>
int main(){
    int arr[5]={4,5,7,854512,8};
    int max=0;
    int min=100;
    for(int i=0;i<=4;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int i =0;i<=5;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }


    printf("max element is %d",max);
    printf("\n min element is %d",min);
    return 0;
}