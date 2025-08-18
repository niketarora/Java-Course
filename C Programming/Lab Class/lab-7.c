#include <stdio.h> 

// void main() { 
//     int a[100],i,n,key, flag=0; 
//     printf("Enter size of the  array : "); 
//     scanf("%d", &n); 
//     printf("Enter elements in array : "); 
//     for(i=0; i<n; i++) { 
//         scanf("%d",&a[i]); 
//     } 
//     printf("Enter the key : "); 
//     scanf("%d", &key); 
//     for(i=0; i<n; i++) { 
//         if(a[i]==key) { 
//             printf("Element found at %d ",i+1); 
//             flag=1; 
//             break;  
//         }  
//     }   
//     if(flag==0) 
//     printf("Element  not  found"); 
// } 

// void main() {
//    int a[100],i,n,key,flag=0; 
//    printf("Enter size of the  array : "); 
//    scanf("%d", &n); 
//    printf("Enter elements in array : "); 
//    for(i=0; i<n; i++) { 
//       scanf("%d",&a[i]); 
//    } 
//    printf("Enter the key : "); 
//    scanf("%d", &key); 
//    for(i=0; i<n; i++) { 
//       if(a[i]==key) { 
//          printf("Element found at %d ",i+1); 
//          flag=1; 
//          break;  
//       }
//    }   
//    if(flag==0)    printf("Element  not  found"); 
// }


// int main() { 
//     int a[50],i,n,large,small; 
//     printf("Enter the number of elements : "); 
//     scanf("%d",&n); 
//     printf("Input the array elements : "); 
//     for(i=0;i<n;++i){ 
//         scanf("%d",&a[i]);
//     }
//     large=small=a[0]; 
//     for(i=1;i<n;++i) { 
//         if(a[i]>large)      large=a[i]; 
//         if(a[i]<small)      small=a[i]; 
//     } 
//     printf("The smallest element is %d \n",small); 
//     printf("The largest element is %d",large); 
//     return 0; 
// }


// void main() { 
//     int a[10],i,sum=0; 
//     printf("Enter upto 5 Values: "); 
//     for(i=0; i<5; i++) {
//     scanf("%d",&a[i]); 
//     }
//     for(i=0; i<5; i++) { 
//         if(i%2==1) 
//         sum=sum+a[i]; 
//     } 
//     printf("Total Sum of Odd values is: %d ",sum); 
// }

// void main() { 
//     int a[100],i,start,end; 
//     printf("Enter upto 10 values: "); 
//     for(i=0; i<10; i++) {
//         scanf("%d",&a[i]); 
//     }
//     printf("Enter the index of sub array: ");
//     scanf("%d%d", &start, &end); 
//     for(i=start; i<end; i++) { 
//         printf("%d", a[i]); 
//     }
// }


// int main() {   
//     char c[10],i; 
//     printf("Enter a character: "); 
//     for(i=0;i<10;i++) { 
//         scanf("%c", &c[i]);   
//     } 
//     for(i=0;i<10;i++) { 
//         printf("ASCII value of %c = %d \n", c[i], c[i]); 
//     } 
//     return 0; 
// }


 
// #include<stdio.h>   
// #define N 10   
//    void main() {   
//     int a[N], i, pos = 0, neg = 0, even = 0, odd = 0, zero = 0;   
//     printf("Enter %d integer numbers:", N);   
//     for(i = 0; i < N; i++) {   
//         scanf("%d", &a[i]);   
//         if(a[i] == 0)      
//             zero++;  
//         if(a[i] > 0)   
//             pos++;
//         if(a[i] < 0)
//             neg++;
//         if(a[i] % 2 == 0)
//             even++;   
//         else
//             odd++;   
//     }
//     printf("Positive: %d\n", pos);   
//     printf("Negative: %d\n", neg);   
//     printf("Even: %d\n", even);   
//     printf("Odd: %d\n", odd);   
//     printf("Zero: %d\n", zero);   
// }   

// #include<stdio.h> 
// void main() { 
//     int a[100], i, j, size, temp; 
//     printf("Please Enter the size of an array: "); 
//     scanf("%d", &size); 
//     for (i = 0; i < size; i++) { 
//       scanf("%d", &a[i]); 
//     } 
//     j = i-1;
//     i = 0;
//     while (i < j) { 
//         temp = a[i]; 
//         a[i] = a[j]; 
//         a[j] = temp; 
//         i++;              
//         j--;          
//     } 
//     printf("Result of an Reverse array is: "); 
//     for (i = 0; i < size; i++) { 
//         printf("%d ", a[i]); 
//     } 
//  }

// #include <stdio.h> 
// int main() { 
//     int n, s[100], a = 1, d = 1, i; 
//     printf("Enter the number of elements:"); 
//     scanf("%d", &n); 
//     for (i = 0; i < n; i++)  scanf("%d", &s[i]); 
//     i = 0; 
//     while ((a == 1 || d == 1) && i < n - 1) { 
//         if (s[i] < s[i+1]) 
//         d = 0; 
//         else if (s[i] > s[i+1]) 
//         a = 0; 
//         i++; 
//     } 
//     if (a == 1) 
//         printf("The array is sorted in ascending order.\n"); 
//     else if (d == 1) 
//         printf("The array is sorted in descending order.\n"); 
//     else 
//         printf("The array is not sorted.\n"); 
//     return 0; 
// }

// int main() { 
//     int array[100], n, c, d, swap; 
//     printf("Enter number of elements:- "); 
//     scanf("%d", &n); 
//     printf("Enter %d integers\n", n); 
//     for (c = 0; c < n; c++) 
//         scanf("%d", &array[c]); 
//     for (c = 0 ; c < n - 1; c++) { 
//         for (d = 0 ; d < n - c - 1; d++) { 
//             if (array[d] > array[d+1]) { 
//                 swap       = array[d]; 
//                 array[d]   = array[d+1]; 
//                 array[d+1] = swap; 
//             } 
//         } 
//     } 
//     printf("Sorted list in ascending order:\n"); 
//     for (c = 0; c < n; c++) 
//         printf("%d ", array[c]); 
//     return 0; 
// } 


#include<stdio.h> 
void main() { 
    int i, j=0, n=10, a[10], b[5], c[5]; 
    for(i=0;i<n;i++) { 
        scanf("%d",&a[i]); 
    } 
    for(i=0;i<n/2;i++) { 
        b[i]=a[i]; 
    } 
    for(i=n/2;i<n;i++) { 
        c[j]=a[i];
        j++; 
    }
    for (i = 0; i<n/2; i++) 
        printf("%d ", b[i]);
    printf("\n");
    for (i = 0; i<n/2; i++) 
        printf("%d ", c[i]);
}
