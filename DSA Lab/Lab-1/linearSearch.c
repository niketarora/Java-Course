#include<stdio.h>
#include <stdbool.h>
#include <limits.h>
void linearSearch(int arr[], int n, int size){
    int flag = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == n){
            flag = 1;
        }
    }
    if(flag == 1){
        printf("Element Found");
    }
    else{
        printf("Element not Found");
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    linearSearch(arr, 4, size); 
}