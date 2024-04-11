#include<stdio.h>
void england(){
    printf("I am in england\n"); //5
    return; //6
}
void australia(){
    printf("I am in australia\n"); //3
    england(); //4
    return; //7
}
void india(){
    printf("I am in india\n"); //1
    australia(); //2
    return; //8
}
int main(){
    india(); //0
    return 0; //9
}