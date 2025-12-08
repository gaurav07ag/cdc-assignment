#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

Node* insertNode(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->val) root->left = insertNode(root->left, key);
    else if (key > root->val) root->right = insertNode(root->right, key);
    return root;
}

bool searchNode(Node* root, int key) {
    if (!root) return false;
    if (root->val == key) return true;
    if (key < root->val) return searchNode(root->left, key);
    return searchNode(root->right, key);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        root = insertNode(root, x);
    }
    int q;
    cin >> q;
    while (q--) {
        int key;
        cin >> key;
        cout << (searchNode(root, key) ? "FOUND" : "NOT_FOUND") << "\n";
    }
    inorder(root);
    return 0;
}
