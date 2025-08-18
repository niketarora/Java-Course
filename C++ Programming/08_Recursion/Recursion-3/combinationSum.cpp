#include <iostream>
#include<vector>
using namespace std;
//  METHOD -> 1 
// void combination(int idx, int target, vector<int>& arr, vector<int>& ans, vector<vector<int>>& finalans){
//     //base conditon
//     if(idx == arr.size()){
//         if(target == 0){
//             finalans.push_back(ans);
//         }
//         return;
//     }
//     if(arr[idx] <= target){
//         ans.push_back(arr[idx]);
//         combination(idx,target-arr[idx], arr, ans, finalans);
//         ans.pop_back();
//     }
//     combination(idx + 1,target, arr, ans, finalans);
// }

//  METHOD -> 2
void combination(int idx, int target, vector<int>& arr, vector<int> ans, vector<vector<int>>& finalans){
    //base conditon
    if(target == 0){
            finalans.push_back(ans);
        return;
    }
    if(target<0)   return;
    for(int i=idx; i<arr.size(); i++){
        ans.push_back(arr[i]);
        combination(i, target-arr[i], arr, ans, finalans);
        ans.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> ans;
    vector<vector<int>> finalans;
    combination(0, target, candidates, ans, finalans);   
    return finalans;
}
int main() {
    vector<int> v1 =  {2,3,6,7};
    int target = 7;
    vector<vector<int>> v = combinationSum(v1, target);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}