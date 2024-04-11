#include<stdio.h>
int main(){
    char arr[]="i my name is rajan\0";
   int i=0;
   while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
   }
    return 0;
}