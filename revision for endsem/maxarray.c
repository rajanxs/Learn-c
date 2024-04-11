#include<stdio.h>
int main(){
    int arr[5]={12,45,76,34,56};
    int max=0;
    int min=76;
    for(int i=0;i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d ",max);
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n%d",min);
    return 0;
}