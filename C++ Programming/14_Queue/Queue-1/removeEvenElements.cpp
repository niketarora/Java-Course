#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int>& q) {
    int n = q.size();
    for (int i = 1; i <= n; i++) {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void removeEven(queue<int>& q) {
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2==0)  q.pop();
        else{
            q.push(q.front());
            q.pop();
        }
    }
}
int main() {
    queue<int> q;
    // push, pop, front, back, size, empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q); 
    removeEven(q);
    display(q);
}