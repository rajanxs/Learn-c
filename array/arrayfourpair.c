#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int total =0;
    int x=12;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            for(int k=j+1;k<9;k++){
                for(int l=k+1;l<9;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==x){
                        total++;
                        printf("(%d,%d,%d,%d)\n",arr[i],arr[j],arr[k],arr[l]);
                    }
                }
            }
        }
    }
    printf("The total fourth pair is %d : ",total );
    return 0;
}