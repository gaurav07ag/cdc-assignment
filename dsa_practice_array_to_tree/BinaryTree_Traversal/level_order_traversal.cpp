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

vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> res;
    if (!root) return res;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int sz = q.size();
        vector<int> level;
        for (int i = 0; i < sz; ++i) {
            Node* cur = q.front();
            q.pop();
            level.push_back(cur->val);
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        res.push_back(level);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> vals(n);
    for (int i = 0; i < n; ++i) cin >> vals[i];
    Node* root = buildTreeLevelOrder(vals);
    vector<vector<int>> res = levelOrder(root);
    for (const auto& level : res) {
        for (int i = 0; i < (int)level.size(); ++i) {
            if (i) cout << ' ';
            cout << level[i];
        }
        cout << "\n";
    }
    return 0;
}
