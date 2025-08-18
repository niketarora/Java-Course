#include <iostream>
#include <queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int levels(Node* root){
    if(root == NULL)   return 0 ;
    return 1 + max(levels(root->left), levels(root->right)); 
}
void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)    q.push(temp->left);
        if(temp->right!= NULL)  q.push(temp->right);
    }
}
void eachLevel(Node* root, vector<vector<int>> &ans){
    int n = levels(root);
    for(int i=1; i<=n; i++){
        vector<int> v;
        nthLevel(root, i, 1, v);
        ans.push_back(v);
    }
    return;
}
void nthLevel(Node* root, int level, int count, vector<int> &v) {
    if (root == NULL) return;
    if(level == count){
        v.push_back(root->val);
        return;
    }
    nthLevel(root->left, level, count+1, v);     
    nthLevel(root->right, level, count+1, v);  
}
int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelOrderQueue(a);
}