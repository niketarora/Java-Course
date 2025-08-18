#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//TWO PASS METHOD
// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(2);
//     v.push_back(1);
//     display(v);
//     int noz=0, noo=0, notw=0;
//     for(int i=0; i<=v.size()-1; i++){
//         if(v[i] == 0)  noz++;
//         else if(v[i] == 1)  noo++;
//         else  notw++;
//     }
//     for(int i=0;i<=v.size()-1;i++){
//         if(i<noz) v[i] = 0;
//         else if(i<(noo+noz)) v[i] = 1;
//         else v[i] = 2;
//     }
//     display(v);
// }

//DUTCH FLAG ALGORITHM
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    display(v);
    int n=v.size();
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = 2;
            high--;
        }
        if(v[mid] == 0){
            int temp = v[low];
            v[low] = v[mid];
            v[mid] = 1;
            low++;
            mid++;
        }
        if(v[mid] == 1){
            mid++;
        }
    }
    display(v);
}