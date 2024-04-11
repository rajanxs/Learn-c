#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1;i<101;i++)
    {
    if(i%2==0)
    continue;
    printf("%d ",i);
    }

    getch();

}