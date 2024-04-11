// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d  ",j);
        }
        printf("\n");
    }
    return 0;
}