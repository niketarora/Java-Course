#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int arr[11]){
    int low = 0;
    int n = 11;
    int high = n-1;
    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid] == mid){
            if(arr[mid + 1] == mid + 1)  low = mid + 1;
            else{
                return mid + 1;
                break;
            }
        }
        else    high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,12};
    int result = binarySearch(arr);
    cout<<result;
}
    