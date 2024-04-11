#include<stdio.h>
int main(){
   int  sum =0;
    int arr[3][3]={{2,3,4},{5,7,8},{1,2,3}};
    for(int i=0;i<=2;i++){
        for(int j=1;j<=2;j++){
            sum =sum +arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}