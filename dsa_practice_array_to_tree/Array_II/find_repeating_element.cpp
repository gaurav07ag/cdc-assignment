#include <bits/stdc++.h>
using namespace std;

int findRepeatingElement(const vector<int>& a) {
    unordered_set<int> seen;
    for (int x : a) {
        if (seen.count(x)) return x;
        seen.insert(x);
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
    cout << findRepeatingElement(a);
    return 0;
}
