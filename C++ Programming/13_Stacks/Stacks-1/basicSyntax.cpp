#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl; //0
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    cout<<st.size()<<endl; // 4
    st.pop(); // 3
    cout<<st.size()<<endl; // 3
    cout<<st.top()<<endl;
}
