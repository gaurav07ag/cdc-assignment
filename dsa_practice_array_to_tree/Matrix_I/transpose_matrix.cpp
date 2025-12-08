#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    vector<vector<int>> t(m, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            t[j][i] = a[i][j];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j) cout << ' ';
            cout << t[i][j];
        }
        cout << "\n";
    }
    return 0;
}
