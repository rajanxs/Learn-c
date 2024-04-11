#include<stdio.h>
int main(){
    int i,j;
    printf("enter a number ");
    scanf("%d",&i);
    printf("enter a number ");
    scanf("%d",&j);
    //i=(i+j)-i;
    //j=(i+j)-j;
    printf("1st SWAP is %d\n",(i+j)-i);
    

    printf("2nd SWAP number is %d",(i+j)-j);
    return 0;
}