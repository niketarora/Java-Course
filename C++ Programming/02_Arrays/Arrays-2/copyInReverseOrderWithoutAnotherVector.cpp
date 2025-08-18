#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(vector<int> &a){
    int i = 0;
    int j = a.size()-1-i;
    while(i<=j){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
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
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(9);
    v1.push_back(4);
    v1.push_back(6);
    display(v1);
    //reverse(v1);
    reversePart(0,4,v1);
    display(v1);
}