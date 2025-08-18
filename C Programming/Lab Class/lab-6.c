// #include <stdio.h> 
// #include<math.h> 

// void main() { 
//     int k=1,n; 
//     printf("Enter the no of lines:"); 
//     scanf("%d",&n);   
//     for(int i=1;i<=n;i++) { 
//         for(int j=1;j<=i;j++,k++) { 
//             printf("%3d", k);
//         } 
//         printf("\n"); 
//     } 
// } 

  
// void main() { 
//     int i,j,n; 
//     printf("Enter the no of lines:"); 
//     scanf("%d",&n); 
//     for(i=1;i<=n;i++) { 
//         for(j=1;j<=i;j++) 
//         { 
//             printf("%d ", i); 
//         } 
//          printf("\n"); 
//     } 
// } 

// void main() { 
//     int i,j,n; 
//     printf("Enter the no of lines:"); 
//     scanf("%d",&n); 
//     for(i=n;i>=1;i--) { 
//         for(j=1;j<=i;j++) { 
//             printf("%d ", i); 
//         } 
//         printf("\n"); 
//     } 
// } 

// 01
// 02 04
// 03 05 07
// 06 08 10
// 11 13 15 17
void main() { 
    int n, odd = 1, even = 2; 
    printf("Enter the no of lines:"); 
    scanf("%d",&n); 
    for(int i=1;i<=n;i++) { 
        if(i % 2 == 0){
            for(int j=1;j<=i;j++) { 
                printf("%2d ", even);
                even += 2; 
            }
        }
        else{
            for(int j=1;j<=i;j++) { 
                printf("%2d ", odd);
                odd += 2; 
            }  
        }   
        printf("\n"); 
    } 
} 

// #include <stdio.h> 
// void main() { 
//     int n, i, range; 
//     printf("Enter an integer: "); 
//     scanf("%d", &n); 
//     do { 
//         printf("Enter the range (positive integer): "); 
//         scanf("%d", &range); 
//     } while (range <= 0); 
//     for (i = 1; i <= range; i++)  { 
//          printf("%d * %d = %d \n", n, i, n * i); 
//     } 
// }

// #include<stdio.h> 
// void main( ) { 
//     int n, a=0, b=1, temp; 
//     printf("Enter the number:"); 
//     scanf("%d",&n); 
//     printf("Fibonacci series is %d %d ", a,b); 
//     while(a+b<=n) { 
//        temp=a; 
//        a=b; 
//        b=a+temp; 
//        printf("%d ",b); 
//     }
// }

// void main() { 
//     int low, high, i, flag; 
//     printf("Enter two numbers(intervals): "); 
//     scanf("%d %d", &low, &high); 
//     printf("Prime numbers between %d and %d are: ", low, high); 
//     while (low < high) {
//         flag = 0;  
//         if (low <= 1) { 
//             low = 2; 
//         } 
//         for (i = 2; i <= low/2; ++i) { 
//             if (low % i == 0) { 
//                 flag = 1; 
//                 break; 
//             } 
//         }
//         if (flag == 0) 
//         printf("%d ", low); 
//         low++; 
//     }
// } 

void main ()  {
    int range, c = 0, num = 2, i, latest = 0; 
    printf ("Enter Nth number:"); 
    scanf ("%d", &range);
    while (c != range) { 
        int count = 0; 
        for (i = 2; i <= sqrt (num); i++) { 
            if (num % i == 0) { 
                count++; 
                break; 
            }
        } 
        if (count == 0)  { 
            c++; 
            latest = num; 
        } 
        num = num + 1; 
    }
    printf ("%dth prime number is %d ",range,latest);
}

int main () { 
    int i, range, num = 1, c = 0, latest = 0; 
    printf ("Enter the nth value:"); 
    scanf ("%d", &range); 
    while (c != range) { 
        int num2 = num; 
        int num1 = num; 
        int sum = 0; 
        while (num1 != 0) { 
            int rem = num1 % 10; 
            num1 = num1 / 10; 
            sum = sum + rem * rem * rem; 
        } 
        if (sum == num2) { 
            c++; 
            latest = num; 
        } 
        num = num + 1; 
    } 
    printf ("%dth amstrong number is %d", range, latest); 
} 