#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf(" enter the number");
    scanf("%d",&year);
    if (year%4==0)
    printf("this number is leap year");
    else
    {
        printf("this number is not leap year");
    }
    getch();
    return 0;

}