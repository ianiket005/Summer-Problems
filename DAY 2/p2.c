#include<stdio.h>
int main(){
    int n,i,r;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        printf("%d",i);
        n=n/10;
    }   
    
    return 0;
}