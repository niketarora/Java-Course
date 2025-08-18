#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int binarySearch(int arr[13], int target){
    int low = 0;
    int n = 13;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid] == target){
            if(arr[mid] == arr[mid-1])  high = mid - 1;
            else{
                flag = true;
                return mid;
                break;
            }
        }
        else if(arr[mid] > target)  high = mid - 1;
        else    low = mid + 1; 
    }
    if(flag == false){
        return -1;
    }
}
int main() {
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target = 4;
    int result = binarySearch(arr,target);
    cout<<arr[result]<<" at "<<result;
    
}