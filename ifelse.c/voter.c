#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("plz enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("yes, he is eligible for vote");
    }
    else
    {
        printf("no,he is not eligible for vote");
    }
    getch();
}