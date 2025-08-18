#include <stdio.h>
int main() {
    int array[100], n, i, j, element, flag = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++) {
        if(array[i] == element) {
            for(j = i; j < n - 1; j++)
                array[j] = array[j + 1];
        n--;
        i--;
        flag = 1;
        }
    }
    if(flag == 1) {
        printf("Updated array:");
        for(i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } 
    else {
        printf("Element not found in the array");
    }
    return 0;
}