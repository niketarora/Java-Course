#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Build a binary tree from level-order array with INT_MIN as "null" sentinel
Node* construct(const int* a, int n) {
    if (n <= 0) return nullptr;
    queue<Node*> q;

    Node* root = new Node(a[0]);
    q.push(root);

    int i = 1; // left index
    int j = 2; // right index

    while (!q.empty() && i < n) {
        Node* cur = q.front();
        q.pop();

        Node* L = nullptr;
        if (a[i] != INT_MIN) {
            L = new Node(a[i]);
        }
        cur->left = L;

        Node* R = nullptr;
        if (j < n && a[j] != INT_MIN) {
            R = new Node(a[j]);
        }
        cur->right = R;

        if (L) q.push(L);
        if (R) q.push(R);

        i += 2;
        j += 2;
    }
    return root;
}

void leftBoundary(Node* root) {
    if (!root) return;
    if (root->left || root->right) {
        cout << root->val << " ";
        if (root->left) leftBoundary(root->left);
        else leftBoundary(root->right);
    }
}

void bottomBoundary(Node* root) {
    if (!root) return;
    if (!root->left && !root->right) {
        cout << root->val << " ";
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rigthBoundary(Node* root) {
    if (!root) return;
    if (root->right) rigthBoundary(root->right);
    else rigthBoundary(root->left);

    if (root->left || root->right) {
        cout << root->val << " ";
    }
}

int main() {
    vector<int> a = {
        1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN,
        11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16, INT_MIN, 17,
        INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20,
        21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN,
        INT_MIN
    };

    Node* root = construct(a.data(), (int)a.size());
    leftBoundary(root);
    bottomBoundary(root);
    if (root) rigthBoundary(root->right);

    cout << endl;
    return 0;
}
