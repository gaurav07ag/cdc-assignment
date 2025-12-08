#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* cur = head;
    while (cur) {
        Node* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        Node* node = new Node(x);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    head = reverseList(head);
    Node* cur = head;
    bool first = true;
    while (cur) {
        if (!first) cout << ' ';
        cout << cur->val;
        first = false;
        cur = cur->next;
    }
    return 0;
}
