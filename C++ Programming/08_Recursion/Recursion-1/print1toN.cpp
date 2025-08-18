#include<iostream>
using namespace std;
// METHOD - 1
// void print(int i , int n){
//     // base condition
//     if(i == n)  return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main(){
//     int n = 9; 
//     int i = 1;
//     print(i,n);
// }
// METHOD - 2
void print(int n){
    // base condition
    if(n == 0)  return;
    print(n-1);
    cout<<n<<endl;
}
int main(){ 
    print(9);
}