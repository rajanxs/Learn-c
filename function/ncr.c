#include<stdio.h>
int main(){
    int n,r;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r: ");
    scanf("%d",&r);
    int nfact =1;
    int rfact =1;
    int nrfact =1;
    for(int i=2;i<=n;i++){
        nfact =nfact*i;
    }
    for(int i=2;i<=r;i++){
        rfact =rfact*i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact =nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("The factorial is : %d",ncr);
    return 0;
}