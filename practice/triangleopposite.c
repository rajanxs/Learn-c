#include<stdio.h>
int main(){
    int m;
    printf("enter numberc of rows ");
    scanf("%d",&m);
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");}
            printf("\n");}
            return 0;
}