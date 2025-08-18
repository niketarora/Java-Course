#include <iostream>
#include<vector>
using namespace std;
int partition(int arr[], int start, int end){
    int pivotElement = arr[(start+end)/2];
    int count = 0; 
    for(int i=start; i<=end; i++){
        if(i == (start+end)/2)  continue;
        if(arr[i]<pivotElement)    count++;
    }
    int pivotIdx = count + start;
    int index = (start+end)/2;
    swap(arr[index], arr[pivotIdx]);
    int i = start;
    int j = end;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement)    i++;
        if(arr[j]>pivotElement)    j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[], int start, int end){
    if(start>=end)   return;
    // 6,9,3,7,2,5,8,1,4
    int pivotIndex = partition(arr, start, end);
    // 5,4,3,1,2,6,8,7,9
    quickSort(arr, start, pivotIndex-1);
    quickSort(arr, pivotIndex+1, end);
}
int main() {
    int arr[] = {6,9,3,7,2,5,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}   