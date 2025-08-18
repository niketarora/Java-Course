#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int> &a){
    while(i<=j){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
vector<int> nextPermutation(vector<int> &a){
    int n =a.size();
    int idx = -1;
    for(int i=n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            idx = i;
            break; 
        }
    }
    if(idx == -1){
        reversePart(0,n-1,a);
    }
    if(idx != -1){
        reversePart(idx+1,n-1,a);
        int j = -1;
        for(int i=idx+1; i<n; i++){
            if(a[i]>a[idx]){
                j = i;
                break;
            }
        }
        int temp = a[idx];
        a[idx] = a[j];
        a[j] = temp;
    }
    return a;
}
// THREE POINTER MEHTOD
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);
    display(v);
    vector<int> a = nextPermutation(v);
    display(v);
}