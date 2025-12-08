#include <bits/stdc++.h>
using namespace std;

long long maxSubArray(const vector<int>& a) {
    if (a.empty()) return 0;
    long long best = a[0];
    long long cur = a[0];
    for (int i = 1; i < (int)a.size(); ++i) {
        cur = max<long long>(a[i], cur + a[i]);
        if (cur > best) best = cur;
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << maxSubArray(a);
    return 0;
}
