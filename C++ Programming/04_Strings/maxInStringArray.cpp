#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string arr[]= {"0123","0023","00182","940","2901"};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        v.push_back(stoi(arr[i]));
    }
    int max=v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i]>max)    max=v[i];   
    }
    cout<<max;

}