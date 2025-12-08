#include <bits/stdc++.h>
using namespace std;

struct MyStack {
    queue<int> q1;
    queue<int> q2;
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop() {
        if (!q1.empty()) q1.pop();
    }
    int top() {
        if (q1.empty()) return -1;
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    MyStack st;
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
            cout << (st.empty() ? 1 : 0) << "\n";
        }
    }
    return 0;
}
