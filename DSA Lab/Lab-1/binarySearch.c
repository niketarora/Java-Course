#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void binarySearch(int arr[], int n, int size){
    int low = 0;
    int high = size - 1;
    bool flag = false;
    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid] == n){
            flag = true;
            break;
        }
        else if(arr[mid] > n)  high = mid - 1;
        else    low = mid + 1; 
    }
    if(flag == true){
        printf("Target Found");
    }
    else    printf("Target not Found");
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    binarySearch(arr, 5, size);   
}
