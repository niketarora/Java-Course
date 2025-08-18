#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void delete(int arr[], int size, int idx){
    int arr2[size-1];
    for(int i=0; i<size; i++){
        if(idx>i){
            arr2[i] = arr[i];
        }
        else{
            arr2[i] = arr[i+1];
        }
    }
    for(int i=0; i<=size-1; i++){
        printf("%d ", arr2[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    delete(arr, size, 5);
}
