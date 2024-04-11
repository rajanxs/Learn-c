#include<stdio.h>
int main(){
    int arr[5]={3,6,9,4,18};
    int sum =0;
    int average =0;
    for(int i=0;i<5;i++){
        sum=sum +arr[i];}
    printf("the sum of this array is %d",sum);
    printf ("\nThe average of this array is %d",sum/5);
    return 0;
}