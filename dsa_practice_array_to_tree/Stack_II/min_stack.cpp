#include <bits/stdc++.h>
using namespace std;

struct MinStack {
    stack<int> st;
    stack<int> mn;
    void push(int x) {
        st.push(x);
        if (mn.empty()) mn.push(x);
        else mn.push(std::min(x, mn.top()));
    }
    void pop() {
        if (st.empty()) return;
        st.pop();
        mn.pop();
    }
    int top() {
        if (st.empty()) return -1;
        return st.top();
    }
    int getMin() {
        if (mn.empty()) return -1;
        return mn.top();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    MinStack ms;
    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            ms.push(x);
        } else if (op == "pop") {
            ms.pop();
        } else if (op == "top") {
            cout << ms.top() << "\n";
        } else if (op == "getMin") {
            cout << ms.getMin() << "\n";
        }
    }
    return 0;
}
