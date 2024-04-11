#include<stdio.h>
int main(){
    int arr[3]={1,3,4};
    for(int i=0;i<3;i++){
        printf("%p\n",&arr[i]);
    }
    return 0;
    //  char arr[3]={'r','a','j'};
    // for(int i=0;i<3;i++){
    //     printf("%p\n",&arr[i]);
    // }
    // return 0;
}