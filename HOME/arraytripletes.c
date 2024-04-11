#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int tripletes=0;
    int number=12;
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            for(int k=j+1;k<=8;k++){
                if(arr[i]+arr[j]+arr[k]==12){
                    tripletes++;
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("\nnumber of triplets is %d",tripletes);
    return 0;
}