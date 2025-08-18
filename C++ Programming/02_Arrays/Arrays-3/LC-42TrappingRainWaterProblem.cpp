#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int water(vector<int> &a){
    int n=a.size();
    // previous greatest element
    int prev[n];
    prev[0] = -1;
    int max = a[0];
    for(int i=1;i<n;i++){
        prev[i] = max;
        if(max<a[i])     max = a[i];
    }
    // next greatest element
    int next[n];
    next[n-1] = -1;
    max = a[n-1];
    for(int i=n-2; i>=0; i--){
        next[i] = max;
        if(max<a[i])    max = a[i];
    }
    // minimum array
    int mini[n];
    for(int i=0; i<n; i++){
        mini[i] = min(prev[i],next[i]);
    }
    // calculating water
    int water = 0;
    for(int i=1; i<n-1; i++){
        if(a[i]<mini[i]){
            water += (mini[i]-a[i]);
        }
    }
    return water;
}
// THREE POINTER MEHTOD
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    display(v);
    int n=water(v);
    cout<<n;
}