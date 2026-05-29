#include<stdio.h>
int main(){
    int n ,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n==0){
        printf("Number of digits in %d is: 1",n);
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        printf("Number of digits in the number is: %d",count);
    }
    return 0;   
}