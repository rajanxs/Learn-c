#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the value of swastik size");
    scanf("%d",&n);
    printf("* "); 

    for(i=0;i<n-2;i++)
    printf(" ");

    for(i=0;i<n;i++)
    printf("* ");
}