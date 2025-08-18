#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void display(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottomRec(stack<int>& st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottomRec(st,val);
    st.push(x);
}
void pushatbottom(stack<int>& st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void reverse(stack<int>& st){
    if(st.size()==1)  return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushatbottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    reverse(st);
    display(st); 
}