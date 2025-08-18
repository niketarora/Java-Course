#include<iostream>
#include<vector>
using namespace std;
int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, result = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                result = mid;
                high = mid - 1;  // keep searching on the left
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }

    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, result = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                result = mid;
                low = mid + 1;  // keep searching on the right
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
}
int main(){
    vector<int> v = {1};
    int target = 1;
    vector<int> result = searchRange(v,target);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
} 