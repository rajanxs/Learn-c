#include<stdio.h>
int main(){
    int r;
    printf("enter no. of rows");
    scanf("%d",&r);
    int c;
    printf("enter no. of column");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}