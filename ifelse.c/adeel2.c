#include <stdio.h>
int main() {
   int i, j, n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i+=2) {
    for(int k=1;k<=n-i; k++){
       printf("   ");
    }
      for (j = 1; j <= i; j++) {
         printf("     %d",j);
      }
      printf("\n");
   }
    return 0;
}