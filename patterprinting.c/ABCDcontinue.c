#include<stdio.h>
int main(){
    int a =1;
    for(int i=1;i<=4;i++){ 
        for(int j=1;j<=4;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c  ",d);
            a++;
        }
        printf("\n");
    }
    return 0;   
}