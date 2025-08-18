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
int kthSmallest(int arr[], int si, int ei, int k){
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1 < k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si,pi-1,k);
}

int main(){
    int arr[] = {5,18,82,20,7,6,31,4,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    int k = 4;
    cout<<kthSmallest(arr,0,n-1,k);
}