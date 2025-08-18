#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
void binary(string s, int n){
    if(n == 0){
        cout<<s<<endl;
        return;
    }
    binary(s+'0', n-1);
    if(s == "")     binary(s+'1', n-1);
    else if(s[s.size()-1] == '0')     binary(s+'1', n-1);
}
int main(){
    int n = 3;
    binary("", n);
}