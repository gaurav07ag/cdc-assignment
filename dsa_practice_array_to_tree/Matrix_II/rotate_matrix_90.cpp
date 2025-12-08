#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            swap(a[i][j], a[j][i]);
    for (int i = 0; i < n / 2; ++i)
        for (int j = 0; j < n; ++j)
            swap(a[i][j], a[n - 1 - i][j]);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j) cout << ' ';
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
