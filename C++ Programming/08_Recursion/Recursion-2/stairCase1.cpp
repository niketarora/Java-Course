#include<iostream>
using namespace std;
int stair(int n){
    if(n == 1)  return 1;
    else if(n == 2) return 2;
    else    return stair(n-1) + stair(n-2);
}
int main(){
    int result = stair(5);
    cout<<result;
}