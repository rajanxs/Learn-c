#include<stdio.h>
int main(){
    int array[7]={34,12,65,32,89,66,04};
    int max=0;
    for(int i=0;i<=6;i++){
        if(max < array[i]){
            max=array[i];
        }}
     printf("The maximun element of this array is : %d",max);
    return 0;
}