#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    printf("divisible by 5 and 3 :");
    else
    printf("not divisible by 5 and 3 :");
    getch();
}

