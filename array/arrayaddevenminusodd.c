#include<stdio.h>
int main(){
    int array[9]={3,5,7,4,9,1,5,8,4};
    int sumeven =0;
    int minusodd =0;
    for(int i=0;i<9;i++){
        if(array[i]%2==0){
            sumeven =sumeven +array[i];
        }
       else
        {
          //  (array[i]%2!=0);
            minusodd =minusodd+array[i];}
    }
        printf("%d\n",sumeven);
        printf("%d",minusodd);
    
    return 0;
}