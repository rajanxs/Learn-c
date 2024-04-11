#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int doubles=0;
    int number=8;
    for(int i=0;i<=8;i++){
        for(int j=i;j<=8;j++){
            if(arr[i]+arr[j]==8){
                doubles++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("\nNumber of doubles is %d",doubles);
    return 0;
}
