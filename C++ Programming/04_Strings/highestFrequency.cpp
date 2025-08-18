#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //string s;
    //cin>>s;
    //int n = s.size();
    //Method-1
    // int max=0;
    // char c;
    // for(int i=0; i<n; i++){
    //     int count=1;
    //     for(int j=i+1; j<n; j++){
    //         if(s[i] == s[j])    count++;
    //     }
    //     if(count>max){
    //            max=count;
    //            c=s[i];
    //     }
    // }
    // cout<<c<<" "<<max;

    //Method-2
    string s = "ainfoaagig";
    vector<int> arr(26,0);
    int n = s.size();
    for(int i=0; i<n; i++){
        char c=s[i];
        int ascii = (int)c - 97;
        arr[ascii]++;
    }
    int max=0,c;
    for(int i=0; i<n; i++){
        string s;
        if(max<arr[i]){  
            max=arr[i];
            c = i + 97;
        }    
    }
    s = (char)c;
    cout<<s<<"-"<<max;
}