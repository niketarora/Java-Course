#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    // 1 3 5 4 3 2 1 0
    int n = arr.size();
    int lo = 1;
    int hi = n-2;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
            return mid;
        else if(arr[mid]>arr[mid+1]) hi = mid - 1;
        else lo = mid + 1;
    }
    return 100;
}
int main() {
    vector<int> v = {0,1,2,3,4,5,6,7,8,9,12,11};
    int result = peakIndexInMountainArray(v);
    cout<<result;
}