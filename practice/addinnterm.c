#include<stdio.h>
int main(){
    int arr[4]={3,5,6,8};
    arr[3]=arr[3]+5;
    arr[2]=arr[2]/3;
    printf("%d",arr[3]);
    printf("\n%d", arr[2]);
    return 0;
}