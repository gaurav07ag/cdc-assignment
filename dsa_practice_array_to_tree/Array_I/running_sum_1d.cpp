#include <bits/stdc++.h>
using namespace std;

vector<long long> runningSum(const vector<int>& a) {
    vector<long long> pref(a.size());
    long long s = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        s += a[i];
        pref[i] = s;
    }
    return pref;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<long long> pref = runningSum(a);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << pref[i];
    }
    return 0;
}
