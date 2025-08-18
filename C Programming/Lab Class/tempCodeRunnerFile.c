// #include<stdio.h> 
// int main() { 
//     int num1, num2, sum; 
//     int *ptr1, *ptr2; 
//     printf("Enter any two Number: "); 
//     scanf("%d%d", &num1, &num2); 
//     ptr1 = &num1; 
//     ptr2 = &num2; 
//     sum = *ptr1 + *ptr2; 
//     printf("Sum of %d and %d is %d", *ptr1, *ptr2, sum); 
//     return 0; 
// // }

// #include <stdio.h>

// // Function to add two numbers using pointers

// void addNumbers(int *a, int *b, int *sum);
// int main() {
//     int num1, num2, result;

//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     addNumbers(&num1, &num2, &result); // Pass addresses (pointers)

//     printf("Sum = %d\n", result);

//     return 0;
// }
// void addNumbers(int *a, int *b, int *sum) {
//     *sum = *a + *b; // Dereference pointers to get values and store result
// }
#include <stdio.h>

int main() {
    for (int i = 1; i > 0; i *= 2) {
        if (i < 0) break;
    }
    printf("Loop exited");
    return 0;
}