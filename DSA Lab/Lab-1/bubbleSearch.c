#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);   
}
