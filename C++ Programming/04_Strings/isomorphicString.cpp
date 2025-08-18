#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> v(150, 1000);
        for(int i = 0; i < s.length(); i++) {
            int idx = (int)s[i];
            if(v[idx] == 1000)
                v[idx] = s[i] - t[i];
            else if(v[idx] != (s[i] - t[i]))
                return false;
        }
        for(int i=0; i<v.size(); i++){
            v[i] = 1000;
        }
        for(int i = 0; i < s.length(); i++) {
            int idx = (int)t[i];
            if(v[idx] == 1000)
                v[idx] = t[i] - s[i];
            else if(v[idx] != (t[i] - s[i]))
                return false;
        }
        return true;
    }
int main(){
    string s = "paper";
    string t = "title";
    // exception 
    // if s = badc  &  t = baba     
    //just to solve this we need to switch the string and solve it again
    bool result = isIsomorphic(s,t);
    cout<<result;
}