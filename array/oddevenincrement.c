#include<stdio.h>
int main(){
    int arr[8]={2,4,6,9,12,45,9,7};
    for(int i=0;i<=7;i++){
        if(arr[i]%2!=0){
            arr[i]=arr[i]+10;
        }
        else 
            arr[i]=arr[i]*2;}
    for(int i=0;i<=7;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}