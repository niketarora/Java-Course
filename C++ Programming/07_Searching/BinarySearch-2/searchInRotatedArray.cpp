#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (high + low)/2;
        if(nums[mid]<nums[high]){
            // right is sorted
            if(nums[mid]<=target  && nums[high]>=target){
                //element in sorted part
                if(nums[mid] == target)  return mid;
                else if(nums[mid] > target)  high = mid - 1;
                else    low = mid + 1; 
            }
            else{
                // element not in sorted part
                high = mid - 1;  
            }
        }
        else{
            // left is sorted
            if(nums[mid]>=target  && nums[low]<=target){
                //element in sorted part
                if(nums[mid] == target)  return mid;
                else if(nums[mid] > target)  high = mid - 1;
                else    low = mid + 1; 
            }
            else{
                // element not in sorted part
                low  = mid + 1;  
            }
        }
    
    }
    return -1;       
}
int main() {
    vector<int> v = {7,8,9,1,2,3,4,5,6};
    int result = search(v,2);
    cout<<result;
}