#include <bits/stdc++.h>
using namespace std;

int equilibriumIndex(const vector<int>& a) {
    long long total = 0;
    for (int x : a) total += x;
    long long left = 0;
    for (int i = 0; i < (int)a.size(); ++i) {
        long long right = total - left - a[i];
        if (left == right) return i;
        left += a[i];
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << equilibriumIndex(a);
    return 0;
}
