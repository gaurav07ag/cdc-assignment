#include <bits/stdc++.h>
using namespace std;

long long maxProductSubarray(const vector<int>& a) {
    if (a.empty()) return 0;
    long long maxProd = a[0];
    long long minProd = a[0];
    long long ans = a[0];
    for (int i = 1; i < (int)a.size(); ++i) {
        long long x = a[i];
        if (x < 0) swap(maxProd, minProd);
        maxProd = max(x, maxProd * x);
        minProd = min(x, minProd * x);
        if (maxProd > ans) ans = maxProd;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << maxProductSubarray(a);
    return 0;
}
