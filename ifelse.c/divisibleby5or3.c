#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    printf("number is divisible ");
    else
    printf(" number is not divisible ");
    getch();
}

