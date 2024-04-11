// this code is only for composite number 
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for( int i=2;i<n-1;i++)
    {
        if(n%i==0){
        printf("number is composite");
        break;}
    }
    getch();
}