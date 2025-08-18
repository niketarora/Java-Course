#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int hcf(int a, int b){
    if(a == 0)  return b;
    return hcf(b%a,a);
}
int main(){
    cout<<hcf(27,5);
}