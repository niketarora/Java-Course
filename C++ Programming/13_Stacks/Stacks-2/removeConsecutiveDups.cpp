#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string removeDups(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if (!st.empty() && s[i] == st.top()) {
            continue;
        }
        st.push(s[i]);
    }
    string res = "";
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    string s = "aaabbcddaabffg";
    cout<<removeDups(s);
}