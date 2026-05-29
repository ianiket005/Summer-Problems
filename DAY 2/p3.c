#include<stdio.h>
int main(){
    int n,rem,prod=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }   
    printf("The product of the digits is :%d",prod);
    return 0;
}