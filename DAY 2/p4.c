#include<stdio.h>
int main(){
    int n,c,rem=0;
    printf("Enter the number :");   
    scanf("%d",&n);
    c=n;
    while(n>0){
        rem=rem*10+n%10;
        n=n/10;
    }
    if(c==rem){
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}