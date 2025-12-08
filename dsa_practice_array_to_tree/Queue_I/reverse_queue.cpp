#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>& q) {
    if (q.empty()) return;
    int x = q.front();
    q.pop();
    reverseQueue(q);
    q.push(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        q.push(x);
    }
    reverseQueue(q);
    bool first = true;
    while (!q.empty()) {
        if (!first) cout << ' ';
        cout << q.front();
        first = false;
        q.pop();
    }
    return 0;
}
