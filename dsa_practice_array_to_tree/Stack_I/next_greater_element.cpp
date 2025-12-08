#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(const vector<int>& a) {
    int n = (int)a.size();
    vector<int> res(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= a[i]) st.pop();
        if (!st.empty()) res[i] = st.top();
        st.push(a[i]);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> res = nextGreaterElements(a);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << res[i];
    }
    return 0;
}
