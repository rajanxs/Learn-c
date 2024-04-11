#include<stdio.h>
int main(){
    int arr[2][2]={{2,3},{4,5}};
    int swap;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){                              
            swap = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = swap;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }return  0;
}