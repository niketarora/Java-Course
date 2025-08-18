#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m= matrix[0].size();
        int i=0;
        int j=m-1;
        int flag=false;
        while(i<n && j>=0){
            if(target>matrix[i][j]){
                i++;
            }
            else if(target<matrix[i][j]){
                j--;
            }
            else if(target==matrix[i][j]){   
                flag=true;
                break;
            }
        }
    return flag;
    }
int main(){
    vector<vector<int>> v(5, vector<int>(5));
    v = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    bool result = searchMatrix(v,21);
    cout<<result;
    return 0;
}