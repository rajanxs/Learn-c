#include<stdio.h>
#include<conio.h>
void main ()
{
    int i, n , f=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1; i<=n; i++);
    {
      f=f*n;
      printf("%d",f);
    }
    getch();
}