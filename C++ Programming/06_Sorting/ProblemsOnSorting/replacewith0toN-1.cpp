#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n =5;
    vector<int> v(5,0);
    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int minindex = -1;
        for(int j=0; j<n; j++){
            if(v[j] == 1)   continue;
            else {
                if(arr[j]<min){
                    min=arr[j];
                    minindex = j;
                }
            }
        }
        arr[minindex] = x;
        v[minindex] = 1;
        x++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}