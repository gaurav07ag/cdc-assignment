#include <bits/stdc++.h>
using namespace std;

long long sumArray(const vector<int>& a, int i) {
    if (i == (int)a.size()) return 0;
    return a[i] + sumArray(a, i + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << sumArray(a, 0);
    return 0;
}
