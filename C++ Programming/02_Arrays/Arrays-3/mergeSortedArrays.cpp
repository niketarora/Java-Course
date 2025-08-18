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
    vector<int> v(m+n);
    int i=0;  //a
    int j=0;  //b
    int k=0;  //v
    while(i<=n-1 && j<=m-1){
        if(a[i]<b[j]){
            v[k] = a[i];
            i++;
            k++;
        }
        else{
            v[k] = b[j];
            j++;   
            k++;
        }
    }
    if(i==n){
        while(j<=m-1){
            v[k] = b[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            v[k] = a[i];
            k++;
            i++;
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