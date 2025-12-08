#include <bits/stdc++.h>
using namespace std;

pair<int,int> minMax(const vector<int>& a) {
    if (a.empty()) return {0, 0};
    int mn = a[0];
    int mx = a[0];
    for (int x : a) {
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }
    return {mn, mx};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    auto p = minMax(a);
    cout << p.first << " " << p.second;
    return 0;
}
