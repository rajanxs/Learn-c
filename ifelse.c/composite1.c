#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if (n==2){
            printf("number is prime number ");
            break;
        }
        else if (n%i==0){
        printf("number is composite\n");
        break;
        }
        else{
        printf("number is prime ");
        }
    }
   // printf("number is prime");}
   // else{printf("number is prime ");}
    return 0;
}