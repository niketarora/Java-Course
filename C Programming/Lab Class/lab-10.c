// #include <stdio.h> 
// int fact(int n) { 
//     int i,f=1; 
//     for(i=1;i<=n;i++) { 
//     f=f*i; 
//     } 
//     return f; 
// }
// void main() { 
//     int n,factorial; 
//     printf("Enter a number to calculate it's factorial\n"); 
//     scanf("%d",&n); 
//     factorial=fact(n); 
//     printf("Factorial of the num(%d) = %d\n",n,factorial);
// } 


// #include <stdio.h> 
// int max(int x[],int k) { 
//     int t,i; 
//     t=x[0]; 
//     for(i=1;i<k;i++) { 
//         if(x[i]>t) 
//         t=x[i]; 
//     }
//     return(t);
// }
// void main() { 
//     int a[]={10,5,45,12,19}; 
//     int n=5,m; 
//     m=max(a,n); 
//     printf("\nMAXIMUM NUMBER IS %d",m); 
// } 


// #include <stdio.h> 
// int hcf(int n1, int n2) { 
//     if (n2 != 0) 
//     return hcf(n2, n1 % n2);    
//     else 
//     return n1; 
// } 
// int main() { 
//     int n1, n2,gcd; 
//     printf("Enter two positive integers: "); 
//     scanf("%d %d", &n1, &n2);
//     gcd = hcf(n1, n2);
//     printf("G.C.D of %d and %d is %d.", n1, n2, gcd); 
//     return 0; 
// } 


// #include <stdio.h> 
// int prime(int n) { 
//     int i; 
//     for(i=2;i<=n/2;i++) { 
//         if(n%i!=0) 
//             continue; 
//         else 
//     return 1; 
//     } 
//     return 0; 
// } 
// void main() { 
//     int num,res=0; 
//     printf("\nENTER A NUMBER: "); 
//     scanf("%d",&num); 
//     res=prime(num); 
//     if(res==0) 
//         printf("\n%d IS A PRIME NUMBER",num); 
//     else 
//         printf("\n%d IS NOT A PRIME NUMBER",num); 
// } 


 
// #include<stdio.h> 
// void main() { 
//     int i,j,n; 
//     printf("Enter the number till which you want prime numbers\n"); 
//     scanf("%d",&n); 
//     printf("Prime numbers are:-\n");     
//     for(i=2;i<=n;i++) { 
//         int c=0; 
//         for(j=1;j<=i;j++) { 
//             if(i%j==0) { 
//                 c++; 
//             } 
//         } 
//         if(c==2) { 
//             printf("%d ",i); 
//         } 
//     }
// }


// #include <stdio.h> 
// int fibo(int num) { 
//     if (num == 0) { 
//         return 0;
//     } 
//     else if (num == 1) { 
//         return 1; 
//     } 
//     else { 
//         return(fibo(num - 1) + fibo(num - 2)); 
//     }
// } 
// int main() { 
//     int num; 
//     int result; 
//     printf("Enter the nth number in fibonacci series: "); 
//     scanf("%d", &num); 
//     if (num < 0) { 
//         printf("Fibonacci of negative number is not possible.\n"); 
//     } 
//     else { 
//         result = fibo(num); 
//         printf("The %d number in fibonacci series is %d\n", num, result); 
//     } 
//     return 0; 
// } 
 

// #include<stdio.h> 
// void fibo(int n) { 
//    int i,c=0; 
//    int a=0; 
//    int b=1; 
//    printf("Fibonacci series for %d terms:-\n",n); 
//    for(i=0;i<n;i++) { 
//        printf("%d ",c); 
//        a=b; 
//        b=c; 
//        c=a+b; 
//    } 
// }  
// void main() { 
//     int n;     
//     printf("\nEnter a number to generate fibonacci series for first n terms\n",n); 
//     scanf("%d",&n); 
//     fibo(n); 
// }


// #include <stdio.h> 
// #include <string.h> 
// void isPalindrome(char str[]) { 
//     int l = 0; 
//     int h = strlen(str) - 1; 
//     while (h > l) { 
//         if (str[l++] != str[h--]) { 
//             printf("%s is not a palindrome\n", str); 
//             return; 
//         } 
//     } 
//     printf("%s is a palindrome\n", str); 
// } 
// int main() 
// { 
//     isPalindrome("abba"); 
//     isPalindrome("abbccbba"); 
//     isPalindrome("geeks"); 
//     return 0; 
// } 
 
 
#include <stdio.h> 
#include <string.h> 
void main() { 
    char name[25][50],temp[25]; 
    int n,i,j;       
    printf("Input number of strings :"); 
    scanf("%d",&n); 
    printf("Input string %d :\n",n); 
    for(i=0;i<=n;i++) { 
        fgets(name[i], sizeof name, stdin); 
    }
    /*Logic Bubble Sort*/   
    for(i=1;i<=n;i++) {
      for(j=0;j<=n-i;j++) {
        if(strcmp(name[j],name[j+1])>0) {  
          strcpy(temp,name[j]); 
          strcpy(name[j],name[j+1]); 
          strcpy(name[j+1],temp); 
        }
      }
    }
      printf("The strings appears after sorting :\n"); 
    for(i=0;i<=n;i++) 
      printf("%s\n",name[i]);     
}