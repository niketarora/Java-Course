#include <stdio.h> 
int main(){
     int n,lastDigit,sum=0;
     printf("Enter the number:- ");
     scanf("%d",&n);
     while(n!=0){
           lastDigit = n%10;
           sum = sum + lastDigit;
           n /= 10;
    }
    printf("%d",sum);
}
