#include <stdio.h>
int main() {
    int n;
    // Input: Size of the array
    printf("Enter the size of the array(n): ");
    scanf("%d", &n);
    int arr[n];
    // Input: Array elements
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    // Print the array in reverse order
    printf("Array elements in reverse order: \n");
    for(int i=n-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}