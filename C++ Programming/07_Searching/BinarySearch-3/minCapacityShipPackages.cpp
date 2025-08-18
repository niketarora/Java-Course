#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
bool check(int mid, vector<int>& weights, int days){
        int n = weights.size();
        int count = 1;
        int m = mid;
        for(int i=0; i<n; i++){
            if(m >= weights[i]){
                m -= weights[i];
            }
            else{
                count++;
                m = mid;
                m -= weights[i];
            }
        }
    if(count <= days)   return true;
    else    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(max<weights[i])   max = weights[i];
            sum += weights[i];
        }
        int low = max;
        int high = sum;
        int minCapacity = sum;
        while(low<=high){
            int mid = (high + low)/2;
            if(check(mid,weights,days)){
                minCapacity = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return minCapacity;
    }
int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int result = shipWithinDays(v,days);
    cout<<result;
    
}