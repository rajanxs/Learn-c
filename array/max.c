#include<stdio.h>
int main(){
    int arr[7]={4,7,5,4,9,1,3};
    int max=0;
    for(int i=0;i<=6;i++){
        if(arr[i]>max){
            max=arr[i];}}
        printf("Max value is : %d ",max);
        return 0;
}