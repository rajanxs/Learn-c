#include<stdio.h>
int main(){
    int r,c;
    printf("enter no. of rows ");
    scanf("%d",&r);
    printf("enter no. of column ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
