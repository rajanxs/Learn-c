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
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("enter no. of rows");
    scanf("%d",&p);
    int s;
    printf("enter no. of column");
    scanf("%d",&s);
    int brr[p][s];
    for(int i=0;i<p;i++){
        for(int j=0;j<s;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    return 0;

}