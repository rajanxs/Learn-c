#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;a<=100;i++)
    {
        printf("%d ",a);
        a=a+2;
    }
    return 0;
    getch();
}