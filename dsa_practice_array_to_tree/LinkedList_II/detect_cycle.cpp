#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, pos;
    if (!(cin >> n)) return 0;
    vector<Node*> nodes;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        Node* node = new Node(x);
        nodes.push_back(node);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    if (!(cin >> pos)) pos = -1;
    if (pos >= 0 && pos < n) {
        tail->next = nodes[pos];
    }
    cout << (hasCycle(head) ? "CYCLE" : "NO_CYCLE");
    return 0;
}
