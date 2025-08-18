#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[] = {2,5,4,1,3};
    int n = sizeof(arr)/sizeof(arr[9]);
    int i = 0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(correctIdx == i) i++;
        else   swap(arr[i] , arr[correctIdx]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}