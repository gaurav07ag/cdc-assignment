#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& a) {
    if (a.empty()) return 0;
    int j = 0;
    for (int i = 1; i < (int)a.size(); ++i) {
        if (a[i] != a[j]) {
            ++j;
            a[j] = a[i];
        }
    }
    return j + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int len = removeDuplicates(a);
    cout << len << "\n";
    for (int i = 0; i < len; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    return 0;
}
