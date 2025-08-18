#include <iostream>
#include <stack>
using namespace std;
int prio(char oprator){
    if(oprator == '+' || oprator == '-')    return 1;
    else    return 2;
}
string solve(string val1, string val2, char ch){
    string s="";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main() {
    string s = "(2+6)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{   // it is -> *, /, +, -
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(prio(s[i])>prio(op.top())) op.push(s[i]);
            else{  //prio(s[i])<=prio(op.top())
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
            char ch = op.top();
            op.pop();
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1, val2, ch);
            val.push(ans);
    }
    cout<<val.top();
}