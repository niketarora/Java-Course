#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "AZYZXBDJKX";
    string t = "";
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i]>='X')    t += s[i];
    }
    int m = t.size();
    for(int i=0; i<m; i++){
        for(int j=0; j<m-1-i; j++){
            if(t[j]<t[j+1]){
                int temp;
                temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
    for(int i=0; i<m; i++){
        cout<<t[i]<<" ";
    }
}