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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
            temp = temp->next;
    }
    cout<<endl;
}
Node* deleteNode(Node* head, int target){
    if(head->val == target){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val!=target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    head = deleteNode(head,30);
    display(head);
}