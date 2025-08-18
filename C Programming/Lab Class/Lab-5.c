// #include <stdio.h> 
// void main() { 
// int decimal, binary = 0, i = 1, rem; 
// printf("Enter a decimal number: "); 
// scanf("%d", &decimal); 
// while (decimal != 0){ 
//     rem = decimal % 2; 
//     decimal /= 2; 
//     binary += rem * i; 
//     i *= 10; 
//     }
// printf("Binary number is: %d", binary); 
// }

#include<stdio.h> 
#include<math.h> 
int fact(int n) { 
    if (n==0) 
    return 1; 
    else 
    return n*fact(n-1); 
}

void main() { 
    int i,n,sign=1; 
    float x,sum=0,term,index=1;
    printf("Enter x in degree: ");
    scanf("%f",&x);
    printf("Enter n : ");
    scanf("%d",&n);
    x=x*3.141/180; // Converted to radian
    for(i=1;i<=n;i++) { 
        term=sign*pow(x,index)/fact(index);
        sum=sum+term;
        index=index+2;
        sign=-sign;
    }
printf("The value of sin(%f) = %.2f",x,sum); 
}