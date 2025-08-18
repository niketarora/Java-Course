// #include <stdio.h> 
// #include <math.h>
// int lenght(int n){
//    int rem,x=0;
//    while(n!=0){
//    rem=n%10;
//    x++;
//    n /= 10;
//    }
//    return x;
// }
// int main(){
//      int n,lastDigit,sum=0,size,original;
//      printf("Enter the number:- ");
//      scanf("%d",&n);
//      original=n;
//      size=lenght(n);
//      while(n!=0){
//            lastDigit = n%10;
//            sum = sum + pow(lastDigit,size);
//            n /= 10;
//      }
//      if(sum == original)      printf("It's an Armstrong Number");
//      else  printf("It's Not an Armstrong Number");
// }


// #include<stdio.h> 
// #define SQR(x) (x*x) 
// int main() 
// { 
// int a; 
// int b=4; 
// a=SQR(b+2); 
// printf("%d \n",a); 
// return 0; 
// }
  
// #include <stdio.h> 
// int main()  
//     { 
//     printf("%d",5<<3<<2<<1>>6); 
//     return 0; 
//       } 

// #include <stdio.h> 
// int main()  
// {  
// int a = 60;  
// int b = 13;  
// int c;  
// c = a & b;  
// printf("%d\n", c );  
// c = a | b;  
// printf("%d\n", c );  
// c = a ^ b;  
// printf("%d", c );  
// return 0; 
// }

#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
     }
    return 0;
}
