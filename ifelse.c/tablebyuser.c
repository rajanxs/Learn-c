#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number  ");
    scanf("%d",&n);
    int a=n;
    for(int i=n;a<=n*10;i++)
    {
        printf("%d  ",a);
        a=(a+n);
    }
    getch();
}