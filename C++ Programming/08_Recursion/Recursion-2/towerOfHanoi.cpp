#include<iostream>
using namespace std;
void hanoi(int n, char source, char helper, char target){
    if(n == 0)  return;
    hanoi(n-1,source,target,helper);
    cout<<source<<"->"<<target<<endl;
    hanoi(n-1,helper,source,target);
}
int main(){
    hanoi(4,'A','B','C');
}