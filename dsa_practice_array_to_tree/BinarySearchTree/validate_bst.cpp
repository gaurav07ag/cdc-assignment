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

bool isValidBSTHelper(Node* root, long long low, long long high) {
    if (!root) return true;
    if (root->val <= low || root->val >= high) return false;
    return isValidBSTHelper(root->left, low, root->val) && isValidBSTHelper(root->right, root->val, high);
}

bool isValidBST(Node* root) {
    return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> vals(n);
    for (int i = 0; i < n; ++i) cin >> vals[i];
    Node* root = buildTreeLevelOrder(vals);
    cout << (isValidBST(root) ? "YES" : "NO");
    return 0;
}
