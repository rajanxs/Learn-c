#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("number is composite ");
            break;
        }
        // else if (n == 2)
        // {
        //     printf("number is prime ");
        // }
        else if (){
            printf("nither prime not composite ");
        }
        else
        {
            printf("number is prime ");
        }
    }

    return 0;
}