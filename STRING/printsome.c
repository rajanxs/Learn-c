#include<stdio.h>
int main(){
    char arr[]={"Physics wallah is best channel for coding\0"};
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
    }
    return 0;
}