#include <bits/stdc++.h>
using namespace std;

struct Stack {
    vector<int> data;
    int topIndex;
    Stack(int capacity) {
        data.resize(capacity);
        topIndex = -1;
    }
    bool isEmpty() {
        return topIndex == -1;
    }
    bool isFull() {
        return topIndex + 1 == (int)data.size();
    }
    void push(int x) {
        if (isFull()) return;
        data[++topIndex] = x;
    }
    void pop() {
        if (isEmpty()) return;
        --topIndex;
    }
    int top() {
        if (isEmpty()) return -1;
        return data[topIndex];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    Stack st(q);
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
