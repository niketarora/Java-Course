#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 21;
    int low = 0;
    int high = n-1;
    bool flag = false;
    int m;
    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid] == target){
            flag = true;
            m = arr[mid];
            break;
        }
        else if(arr[mid] > target)  high = mid - 1;
        else    low = mid + 1; 
    }
    if(flag == true){
        cout<<"target found at:-"<<m;
    }
    else    cout<<"target not found";
}