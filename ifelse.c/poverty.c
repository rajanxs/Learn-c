#include<stdio.h>
#include<conio.h>
int main()
{
    int salary;
    printf("enter the monthly salary");
    scanf("%d",&salary);
    if(salary>=7000)
    {
    printf("you are above the proverty line ");
    }
    else
    {
        printf("you are below the porvety line");
    }
    return 0 ;

}