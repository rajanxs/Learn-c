#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area;
    printf("enter the value of radius:");
    scanf("%f",&r);
    area=4/3*3.14*r*r*r;
    printf("the area of sphere is %f ",area);
    getch();

}