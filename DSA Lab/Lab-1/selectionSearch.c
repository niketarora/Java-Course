#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minindex = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                minindex = j;
            }
        }
        swap(&arr[i], &arr[minindex]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, size);
}
