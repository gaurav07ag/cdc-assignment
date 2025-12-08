#include <bits/stdc++.h>
using namespace std;

struct QueueArr {
    vector<int> data;
    int frontIndex;
    int rearIndex;
    int sz;
    QueueArr(int capacity) {
        data.resize(capacity);
        frontIndex = 0;
        rearIndex = 0;
        sz = 0;
    }
    bool isEmpty() {
        return sz == 0;
    }
    bool isFull() {
        return sz == (int)data.size();
    }
    void enqueue(int x) {
        if (isFull()) return;
        data[rearIndex] = x;
        rearIndex = (rearIndex + 1) % data.size();
        ++sz;
    }
    void dequeue() {
        if (isEmpty()) return;
        frontIndex = (frontIndex + 1) % data.size();
        --sz;
    }
    int front() {
        if (isEmpty()) return -1;
        return data[frontIndex];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    QueueArr qu(q);
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
