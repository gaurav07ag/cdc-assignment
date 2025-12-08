#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

void insertAtEnd(Node*& head, int v) {
    Node* node = new Node(v);
    if (!head) {
        head = node;
        return;
    }
    Node* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = node;
}

void deleteValue(Node*& head, int v) {
    if (!head) return;
    if (head->val == v) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node* cur = head;
    while (cur->next && cur->next->val != v) cur = cur->next;
    if (cur->next) {
        Node* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
    }
}

void printList(Node* head) {
    Node* cur = head;
    bool first = true;
    while (cur) {
        if (!first) cout << ' ';
        cout << cur->val;
        first = false;
        cur = cur->next;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    Node* head = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        insertAtEnd(head, x);
    }
    int delVal;
    cin >> delVal;
    deleteValue(head, delVal);
    printList(head);
    return 0;
}
