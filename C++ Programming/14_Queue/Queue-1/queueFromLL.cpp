#include <iostream>
using namespace std;
class Node{ // user defined date type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size == 0)   head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int front(){
        if(size == 0)   return -1;
        return head->val;
    }
    int back(){
        if(size == 0)   return -1;
        return tail->val;
    }
};
    int main() {
    Queue ll;  // { }
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.pop();
    ll.display();
    ll.push(30);
    ll.push(40);
    ll.push(50);
    ll.pop();
    ll.display();

}