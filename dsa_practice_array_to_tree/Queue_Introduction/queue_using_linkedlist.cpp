#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

struct QueueLL {
    Node* head;
    Node* tail;
    QueueLL() {
        head = nullptr;
        tail = nullptr;
    }
    bool isEmpty() {
        return head == nullptr;
    }
    void enqueue(int x) {
        Node* node = new Node(x);
        if (!tail) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    void dequeue() {
        if (isEmpty()) return;
        Node* tmp = head;
        head = head->next;
        if (!head) tail = nullptr;
        delete tmp;
    }
    int front() {
        if (isEmpty()) return -1;
        return head->val;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    QueueLL qu;
    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            qu.enqueue(x);
        } else if (op == "pop") {
            qu.dequeue();
        } else if (op == "front") {
            cout << qu.front() << "\n";
        } else if (op == "empty") {
            cout << (qu.isEmpty() ? 1 : 0) << "\n";
        }
    }
    return 0;
}
