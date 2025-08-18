#include <iostream>
#include <vector>
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
class LinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0)   head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBeginning(int val){
        Node* temp = new Node(val);
        if(size == 0)   head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if (idx==0) insertAtBeginning(val);
        else if (idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty!";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx==0){
            cout<<"List is Empty"<<endl;
            return;
        }
        else if (idx<0 || idx>size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if (idx==0) deleteAtHead();
        else if (idx==size) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--; 
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>size-1){
            cout<<"Invaild Index ";
            return -1;
        }
        else if(idx == 0)   return head->val;
        else if(idx == size-1)  return tail->val;
        else{
            Node* temp = head;
            for(int i=0; i<idx; i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
};
int main() {
    LinkedList ll;  // { }
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtIdx(2,100);
    ll.display();
    cout<<ll.getAtIdx(ll.size);
}