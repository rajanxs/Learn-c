#include<stdio.h>
#include<conio.h>
void main()
{
    float si,p r,t;
    printf("enter the value of p");
    scanf("%f",&p);
    printf("enter the value of r");
    scanf("%f",&r);
    printf("enter the value of t");
    scanf("%f",&t);
    float si = (p*r*t)/100;
    printf("the intrest of this amount is %f",si);
    getch();
}