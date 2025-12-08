#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

struct StackLL {
    Node* head;
    StackLL() {
        head = nullptr;
    }
    bool isEmpty() {
        return head == nullptr;
    }
    void push(int x) {
        Node* node = new Node(x);
        node->next = head;
        head = node;
    }
    void pop() {
        if (isEmpty()) return;
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
    int top() {
        if (isEmpty()) return -1;
        return head->val;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    StackLL st;
    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            st.push(x);
        } else if (op == "pop") {
            st.pop();
        } else if (op == "top") {
            cout << st.top() << "\n";
        } else if (op == "empty") {
            cout << (st.isEmpty() ? 1 : 0) << "\n";
        }
    }
    return 0;
}
