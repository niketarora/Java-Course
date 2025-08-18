#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void combination(int idx, int target, vector<int>& arr, vector<int>& ans, vector<vector<int>>& finalans){
    //base condition
    if(target == 0){
        finalans.push_back(ans);
        return;
    }
    for(int i=idx; i<arr.size(); i++){
        if(i>idx && arr[i] == arr[i-1])     continue;
        if(arr[i]>target)   break;
        ans.push_back(arr[i]);
        combination(i+1, target-arr[i], arr, ans, finalans);
        ans.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> ans;
    vector<vector<int>> finalans;
    sort(candidates.begin(), candidates.end());
    combination(0, target, candidates, ans, finalans);   
    return finalans;
}
int main() {
    vector<int> v1 =  {1,1,1,2,2};
    int target = 4;
    vector<vector<int>> v = combinationSum(v1, target);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}