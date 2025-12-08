#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& a) {
    int i = 0;
    int j = (int)a.size() - 1;
    while (i < j) {
        swap(a[i], a[j]);
        ++i;
        --j;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    reverseArray(a);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    return 0;
}
