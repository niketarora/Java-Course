#include <iostream>
#include<algorithm>
using namespace std;
void subString(string ans, string original, int idx){
    if(idx == original.size()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    subString(ans,original,idx+1);
    subString(ans+ch,original,idx+1);
}

int main(){
    string str = "abc";
    subString("",str,0);
}