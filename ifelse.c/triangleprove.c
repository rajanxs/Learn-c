#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter value of x : ");
    scanf("%d",&x);
    printf("enter value of y : ");
    scanf("%d",&y);
    printf("enter the value of z : ");
    scanf("%d",&z);
    if((x+y)>z || (y+z)>x || (x+z)>y){
        printf("triangle is valid");
    }
        else{ 
            printf("traiangle is not valid");
        }
    return 0;       
}