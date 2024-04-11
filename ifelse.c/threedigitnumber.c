#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("value is between three digit number");
    else
    {
        printf("not three digit number");
    }
    getch();
}