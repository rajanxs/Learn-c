#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int pair=0;
    int x= 8;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if (arr[i]+arr[j]==x){
                pair++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("\n%d",pair);
    return 0;
}