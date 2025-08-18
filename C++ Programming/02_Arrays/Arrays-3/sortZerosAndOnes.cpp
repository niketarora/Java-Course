#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//METHOD-1  TWO PASS METHOD
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(0);
//     v1.push_back(1);
//     v1.push_back(0);
//     v1.push_back(0);
//     v1.push_back(1);
//     v1.push_back(1);
//     v1.push_back(0);
//     v1.push_back(1);
//     display(v1);
//     int noz=0, noo=0;
//     for(int i=0;i<=v1.size()-1;i++){
//         if(v1[i] == 0)  noz++;
//         else  noo++;
//     }
//     for(int i=0;i<=v1.size()-1;i++){
//         if(i<noz) v1[i] = 0;
//         else  v1[i] = 1;
//     }
//     display(v1);
// }

//METHOD-2 TWO POINTERS MEHTOD
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    display(v);
    int n = v.size(),i=0,j=n-1,temp;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            temp = v[j];
            v[j] = v[i];
            v[i] = temp;
            i++;
            j--;
        }

    }
    display(v);
}