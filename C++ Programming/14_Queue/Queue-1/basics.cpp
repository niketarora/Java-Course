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
void reverse(queue<int>& q) {
    stack<int> st;
    // empty the queue into stack
    while (q.size() > 0) {
        st.push(q.front());
        q.pop();
    }
    // empty the stack into queue
    while (st.size() > 0) {
        q.push(st.top());
        st.pop(); 
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
    display(q); 
    reverse(q);
    display(q);
}