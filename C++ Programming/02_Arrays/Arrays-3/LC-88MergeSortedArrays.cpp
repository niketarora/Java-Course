#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
vector<int> merge(vector<int> &a, vector<int> &b){
    int n=a.size();
    int m=b.size();
    vector<int> v(max(n,m));
    int i=n-1-m;  //a
    int j=m-1;  //b
    int k=n-1;  //v
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            v[k] = a[i];
            i--;
            k--;
        }
        else{
            v[k] = b[j];
            j--;   
            k--;
        }
    }
    if(i==-1){
        while(j>=0){
            v[k] = b[j];
            k--;
            j--;
        }
    }
    if(j==-1){
        while(i>=0){
            v[k] = a[i];
            k--;
            i--;
        }
    }
    return v;
}
// THREE POINTER MEHTOD
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);

    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    vector<int> v = merge(v1,v2);
    display(v1);
    display(v2);
    display(v);
}