#include <bits/stdc++.h>
using namespace std;

int findElement(const vector<int>& a, int target) {
    for (int i = 0; i < (int)a.size(); ++i) {
        if (a[i] == target) return i;
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
    int target;
    cin >> target;
    cout << findElement(a, target);
    return 0;
}
