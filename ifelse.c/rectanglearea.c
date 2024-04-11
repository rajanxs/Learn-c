#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,area ,perimeter;
    printf("value of length :");
    scanf("%d",&l);
    printf("value of breath :");
    scanf("%d",&b);
    area = l*b;
    perimeter = 2*(l+b);
    if(area>=perimeter)
    {
    printf("area is greater then perimeter");
    }
    else
    {
        printf("area is less than perimeter");
    }
    getch();
    
    

    
}