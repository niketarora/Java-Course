#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isPalindrom(string s, int i, int j){
    if(i>j)     return true;
    if(s[i] != s[j])    return false;
    else  isPalindrom(s, i+1, j-1);  
}
int main(){
    string s = "racecar";
    cout<<isPalindrom(s,0,s.size()-1);
}