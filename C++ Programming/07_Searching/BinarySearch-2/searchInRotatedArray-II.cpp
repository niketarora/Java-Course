#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int>& nums, int target) {
    // int n = nums.size();
    // int low = 0;
    // int high = n-1;
    // while(low <= high){
    //     int mid = (high + low)/2;
    //     if(nums[low] == nums[mid] && nums[mid] == nums[high] && low!=mid && high!=mid){
    //         low++;
    //         high--;
    //         continue;
    //     }
    //     cout<<low<<" "<<high<<endl;
    //     if(nums[mid]<nums[high]){
    //         // right is sorted
    //         if(nums[mid]<=target  && nums[high]>=target){
    //             //element in sorted part
    //             if(nums[mid] == target)  return true;
    //             else if(nums[mid] > target)  high = mid - 1;
    //             else    low = mid + 1; 
    //         }
    //         else{
    //             // element not in sorted part
    //             high = mid - 1;  
    //         }
    //     }
    //     else{
    //         // left is sorted
    //         if(nums[mid]>=target  && nums[low]<=target){
    //             //element in sorted part
    //             if(nums[mid] == target)  return true;
    //             else if(nums[mid] > target)  high = mid - 1;
    //             else    low = mid + 1; 
    //         }
    //         else{
    //             // element not in sorted part
    //             low  = mid + 1;  
    //         }
    //     }
    
    // }
    // return false;
    int n = nums.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(nums[mid] == target) return true;
        if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low++;
            high--;
            continue;
        }

        if(nums[low] <= nums[mid]) {
            if(nums[low] <= target && target <= nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if(nums[mid] <= target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return false;       
}
int main() {
    vector<int> v = {1,1,1,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,1,1,1,1};
    bool result = search(v,13);
    cout<<result;
}