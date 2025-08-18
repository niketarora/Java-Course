// #include <stdio.h>
// int main() {
//     int array[100], n, i, j, element, flag = 0;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     printf("Enter %d elements:", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//     }
//     printf("Enter the element to delete: ");
//     scanf("%d", &element);
//     for(i = 0; i < n; i++) {
//         if(array[i] == element) {
//             for(j = i; j < n - 1; j++)
//                 array[j] = array[j + 1];
//         n--;
//         i--;
//         flag = 1;
//         }
//     }
//     if(flag == 1) {
//         printf("Updated array:");
//         for(i = 0; i < n; i++) {
//             printf("%d ", array[i]);
//         }
//         printf("\n");
//     } 
//     else {
//         printf("Element not found in the array");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int arr1[100], arr2[100], result[200];
//     int n1, n2, i, k = 0;
//     // Input size of the first array
//     printf("Enter the number of elements in the first array: ");
//     scanf("%d", &n1);
//     printf("Enter %d elements for the first array:\n", n1);
//     for(i = 0; i < n1; i++) {
//         scanf("%d", &arr1[i]);
//     }
//     // Input size of the second array
//     printf("Enter the number of elements in the second array: ");
//     scanf("%d", &n2);
//     for(i = 0; i < n2; i++) {
//         scanf("%d", &arr2[i]);
//     }
//     // Concatenate the array
//     for(i = 0; i < n1; i++,k++) {
//         result[k] = arr1[i];
//     }
//     for(i = 0; i < n2; i++,k++) {
//         result[k] = arr2[i];
//     }
//     // Print the concatenated array
//     printf("Concatenated array:\n");
//     for(i = 0; i < k; i++) {
//         printf("%d ", result[i]);
//     }
//     printf("\n");
//     return 0;
// }


// #include <stdio.h> 
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


// #include <stdio.h>
// int main() { 
//     int array[100], n, c, d, swap; 
//     printf("Enter number of elements:- "); 
//     scanf("%d", &n); 
//     printf("Enter %d integers\n", n); 
//     for (c = 0; c < n; c++) 
//         scanf("%d", &array[c]); 
//     for (c = 0 ; c < n - 1; c++) { 
//         for (d = 0 ; d < n - c - 1; d++) { 
//             if (array[d] < array[d+1]) { 
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


// #include <stdio.h> 
// #define SIZE 4 
// int main() { 
//     int A[SIZE][SIZE];
//     int B[SIZE][SIZE];
//     int row, col; 
//     // Input elements in matrix A from user 
//     printf("Enter elements in matrix of size 4X4: \n"); 
//     for(row=0; row<SIZE; row++) { 
//         for(col=0; col<SIZE; col++) { 
//             scanf("%d", &A[row][col]); 
//         } 
//     }  
//     // Find transpose of matrix A
//     for(row=0; row<SIZE; row++) { 
//         for(col=0; col<SIZE; col++) { 
//             // Store each row of matrix A to each column of matrix B
//             B[row][col] = A[col][row]; 
//         } 
//     }
//     printf("\n");
//     for(row=0; row<SIZE; row++) { 
//         for(col=0; col<SIZE; col++) { 
//             printf("%d ", B[row][col]); 
//         }
//         printf("\n");
//     }  
//     return 0; 
// }
