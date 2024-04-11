#include<stdio.h>
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int b;
    printf("enter a number ");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           // printf("enter element ");
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}