#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(7);
    v.push_back(8);
    v.push_back(1);
    v.push_back(0);
    v.push_back(6);
    v.push_back(4);
    int x;
    cout<<"Enter the number:- ";
    cin>>x;
    int idx = -1;
    for(int i=v.size()-1 ; i>=0 ; i--){
        if(v[i] == x)     idx=i;
        break;
    }
    cout<<idx;
} 