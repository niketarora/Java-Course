#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void insert(int arr[], int size, int idx, int num){
    int arr2[size+1];
    for(int i=0; i<=size; i++){
        if(idx>i){
            arr2[i] = arr[i];
        }
        else if(idx == i){    
            arr2[i] = num;
        }
        else{
            arr2[i] = arr[i-1];
        }
    }
    for(int i=0; i<=size; i++){
        printf("%d ", arr2[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    insert(arr, size, 5, 45); 
}
