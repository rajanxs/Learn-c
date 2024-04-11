#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("number divisible by 5 :");
    }
    else
    {
        printf("number is not divisible by 5");
    }
    getch();
}