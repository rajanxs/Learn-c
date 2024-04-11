//3 8 12 17 22 27 32 37 ............n terms
#include<stdio.h>
void main()
{
    int n;
    printf("enter the nunmber");
    scanf("%d",&n);
    for(int i=3;i<=5*n-2;i=i+5)
    printf("%d  ",i);
}