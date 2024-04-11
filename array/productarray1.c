#include<stdio.h>
int main(){
    int marks[5]={30,5,90,45,11};
    int product =1;
    for(int i=0;i<=4;i++){
        product =product*marks[i];}
        printf("The product of all element of array is %d\n",product );
        return 0;}
// }
// #include<stdio.h>
// int main(){
//     int array[5]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum =sum +array[i];}
//         printf(" The sum of all index of element of array is : %d",sum);
//         return 0;
// }