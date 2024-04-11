#include<stdio.h>
int main(){
    int arr[3]={6,5,2},product=1;
    for(int i =0;i<3;i++){
       product = product*arr[i];
    }
    printf("%d",product);
    return 0;
}