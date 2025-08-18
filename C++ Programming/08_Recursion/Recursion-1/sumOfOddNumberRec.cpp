#include<iostream>
using namespace std;
int print(int n){
    // base condition
    int sum = 0;
    if(n <= 0)  return sum;
    sum += (n + print(n-2));
    return sum;
}
int main(){ 
    int result = print(5);
    cout<<result;
}