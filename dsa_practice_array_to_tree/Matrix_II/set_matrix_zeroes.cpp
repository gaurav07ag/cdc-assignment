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
    vector<int> rows(n, 0), cols(m, 0);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (a[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (rows[i] || cols[j]) a[i][j] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j) cout << ' ';
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
