// #include<stdio.h> 
// void main() { 
//     int n,i; 
//     float avg[5],s1[5],s2[5],s3[5],sum[5]; 
//     for(i=0;i<5;i++) { 
//         printf("Enter marks of all students in %d subject:",i+1); 
//         scanf("%f%f%f",&s1[i],&s2[i],&s3[i]); 
//     } 
//     for(i=0;i<5;i++) { 
//         sum[i]=s1[i]+s2[i]+s3[i]; 
//         avg[i]=sum[i]/3; 
//     } 
//     for(i=0;i<5;i++) 
//         printf("Student %d's marks:\n Total : %.2f\n Average : %.2f\n", i+1,sum[i],avg[i]); 
// }

// #include <stdio.h> 
// #define MAX 100 
// int main() { 
//     int arr[MAX], n, i; 
//     int num, count; 
//     printf("Enter total number of elements: "); 
//     scanf("%d", &n); 
//     printf("Enter array elements:"); 
//     for (i = 0; i < n; i++) { 
//         printf("Enter element %d: ", i + 1); 
//         scanf("%d", &arr[i]); 
//     } 
//     printf("Enter number to find Occurrence: "); 
//     scanf("%d", &num); 
//     count = 0; 
//     for (i = 0; i < n; i++) { 
//         if (arr[i] == num) 
//         count++; 
//     } 
//     printf("Occurrence of %d is: %d\n", num, count); 
//     return 0; 
// } 

// #include<stdio.h>     
// int main() {   
//     int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;     
//     printf("Enter the number of row=");     
//     scanf("%d",&r);     
//     printf("Enter the number of column=");     
//     scanf("%d",&c);     
//     printf("Enter the first matrix element=\n");     
//     for(i=0;i<r;i++) {     
//         for(j=0;j<c;j++) {     
//             scanf("%d",&a[i][j]);     
//         }     
//     }     
//     printf("Enter the second matrix element=\n");     
//     for(i=0;i<r;i++) {     
//         for(j=0;j<c;j++) {     
//             scanf("%d",&b[i][j]);     
//         }     
//     }     
//     printf("multiply of the matrix=\n");     
//     for(i=0;i<r;i++) {     
//         for(j=0;j<c;j++) {     
//             mul[i][j]=0;     
//             for(k=0;k<c;k++) {     
//                 mul[i][j]+=a[i][k]*b[k][j];     
//             }     
//         }     
//     }     
//     //for printing result     
//     for(i=0;i<r;i++) {     
//         for(j=0;j<c;j++) {     
//             printf("%d ",mul[i][j]);     
//         }     
//         printf("\n");     
//     }     
//     return 0;   
// } 


// #include<stdio.h> 
// #include<conio.h> 
// int main() { 
//     int size = 3; 
//     int matrix[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}}; 
//     int row, column = 0; 
//     int sum, sum1, sum2; 
//     int flag = 0; 
//     printf("Enter matrix : "); 
//     for (row = 0; row < size; row++) { 
//         for (column = 0; column < size; column++) 
//             scanf("%d", &matrix[row][column]); 
//     }
//     //For diagonal elements 
//     sum = 0; 
//     for (row = 0; row < size; row++) { 
//         for (column = 0; column < size; column++) { 
//             if (row == column) 
//                 sum = sum + matrix[row][column]; 
//         } 
//     }   
//     //For Rows 
//     for (row = 0; row < size; row++) { 
//         sum1 = 0; 
//         for (column = 0; column < size; column++) { 
//             sum1 = sum1 + matrix[row][column]; 
//         } 
//         if (sum == sum1) 
//             flag = 1; 
//         else { 
//             flag = 0; 
//             break; 
//         } 
//     } 
//     //For Columns 
//     for (row = 0; row < size; row++) { 
//         sum2 = 0; 
//         for (column = 0; column < size; column++) { 
//             sum2 = sum2 + matrix[column][row]; 
//         } 
//         if (sum == sum2) 
//             flag = 1; 
//         else { 
//             flag = 0; 
//             break; 
//         } 
//     } 
//     if (flag == 1) 
//         printf("\nMagic square"); 
//     else 
//         printf("\nNo Magic square"); 
//     return 0; 
// } 


// #include <stdio.h> 
// #define SIZE 3 
// int main() { 
//     int A[SIZE][SIZE];  // Original matrix 
//     int B[SIZE][SIZE];  // Transpose matrix 
//     int row, col, isSymmetric; 
//     // Input elements in matrix A from user 
//     printf("Enter elements in matrix of size 3x3: \n"); 
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
//     // Check whether matrix A is equal to its transpose or not
//     isSymmetric = 1; 
//     for(row=0; row<SIZE && isSymmetric; row++) { 
//         for(col=0; col<SIZE; col++) { 
//             // If matrix A is not equal to its transpose
//             if(A[row][col] != B[row][col]) { 
//                 isSymmetric = 0; 
//                 break; 
//             } 
//         } 
//     }  
//     // If the given matrix is symmetric/ 
//     if(isSymmetric == 1)
//         printf("\nThe given matrix is Symmetric matrix: \n"); 
//     else
//         printf("\nThe given matrix is not Symmetric matrix.");
//     return 0; 
// }

// #include <stdio.h> 
// #include <math.h> 
// void main () {  
//     static int array[10][10]; 
//     int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal; 
//     printf("Enter the order of the matrix\n"); 
//     scanf("%d%d", &m, &n); 
//     printf("Enter the n coefficients of the matrix \n"); 
//     for (i = 0; i < m; ++i) { 
//         for (j = 0; j < n; ++j) { 
//             scanf("%d", &array[i][j]); 
//             a = array[i][j] * array[i][j]; 
//             sum1 = sum1 + a; 
//         } 
//     } 
//     printf("%d",sum1);
//     normal = sqrt(sum1); 
//     printf("The normal of the given matrix is = %d\n", normal); 
//     for (i = 0; i < m; ++i) {
//         for (j = 0; j < n; ++j) {  
//             if(i == j)
//                 sum = sum + array[i][i];
//         }
//     }  
//     printf("Trace of the matrix is = %d\n", sum); 
// } 