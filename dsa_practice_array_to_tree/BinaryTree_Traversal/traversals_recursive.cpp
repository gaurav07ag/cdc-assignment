#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

Node* buildTreeLevelOrder(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    int n = vals.size();
    if (vals[0] == -1) return nullptr;
    Node* root = new Node(vals[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < n) {
        Node* cur = q.front();
        q.pop();
        if (i < n && vals[i] != -1) {
            cur->left = new Node(vals[i]);
            q.push(cur->left);
        }
        ++i;
        if (i < n && vals[i] != -1) {
            cur->right = new Node(vals[i]);
            q.push(cur->right);
        }
        ++i;
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> vals(n);
    for (int i = 0; i < n; ++i) cin >> vals[i];
    Node* root = buildTreeLevelOrder(vals);
    inorder(root);
    cout << "\n";
    preorder(root);
    cout << "\n";
    postorder(root);
    return 0;
}
