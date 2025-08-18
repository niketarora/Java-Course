#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> v(k);
        if(x<arr[0]){
            for(int i=0; i<k; i++){
                v[i] = arr[i];
            }
            return v;
        }
        if(x>arr[n-1]){
            for(int i=0; i<k; i++){
                v[i] = arr[n-i-1];
            }
            sort(v.begin(),v.end());
            return v;
        }
        int low = 0;
        int high = n-1;
        bool flag = false;  // to check weather the element is present or not
        int index = 0;
        int mid = -1;
        while(low<=high){
            mid = (high + low)/2;
            if(arr[mid] == x){
                flag = true;
                v[index] = arr[mid];
                index++;
                break;
            }
            else if(arr[mid]>x) high = mid - 1;
            else    low = mid + 1;
        }
        int lb = high;
        int ub = low;
        if(flag == true){
            lb = mid - 1;
            ub = mid + 1;
        }
        while(index<k && lb>=0 && ub<=n-1){
            int d1 = abs(x - arr[lb]);
            int d2 = abs(x - arr[ub]);
            if(d1<=d2){
                v[index] = arr[lb];
                lb--;
            }
            else{ // d1 > d2
                v[index] = arr[ub];
                ub++;
            }
            index++;
        }
        if(lb<0){
            while(index<k){
                v[index] = arr[ub];
                ub++;
                index++;
            }
        }
        if(ub>n-1){
            while(index<k){
                v[index] = arr[lb];
                lb--;
                index++;
            }
        }
        sort(v.begin(),v.end());
        return v;  
}
int main() {
    vector<int> v = {1,1,1,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,1,1,1,1};
    int k = 3;
    int x = 13;
    vector<int> result = findClosestElements(v,3,13);
    for(int i=0; i<k; i++){
        cout<<v[i]<<" ";
    }
}