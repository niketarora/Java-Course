#include <iostream>
#include <vector>
using namespace std;
int max_poweR_of2(int n) {
    for(int i=1; i<=16; i*=2){
        n = n | (n >> i);
    }
//   n = n | (n >> 1);
//   n = n | (n >> 2);
//   n = n | (n >> 4);
//   n = n | (n >> 8);
//   n = n | (n >> 16);
  return (n+1)>>1;
}
int main() {
    int x = 100;
    int temp;
    while(x != 0) {
      temp = x;
      x = x & (x-1);
    }
    cout<<temp<<"\n";
    int y = 100;
    cout<<max_poweR_of2(y)<<"\n";
    return 0;
}