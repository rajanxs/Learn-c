#include<stdio.h>
int main(){
    int arr[7]={4,6,8,2,9,4,6};
  // scanf("%d %d %d %d %d %d %d ",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
    int sumeven =0;
    int sumodd =0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            sumeven =sumeven +arr[i];
        }
        else
        {
            sumodd=sumodd+arr[i];
        }
    }
    printf("%d\n",sumeven);
    printf("%d\n",sumodd);
    int res= sumeven -sumodd;
    printf("The difference of sumeven and sumodd is : %d",res);
    return 0;
}