#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(const vector<vector<int>>& a, int target) {
    int n = (int)a.size();
    if (n == 0) return false;
    int m = (int)a[0].size();
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0) {
        if (a[i][j] == target) return true;
        if (a[i][j] > target) --j;
        else ++i;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    int target;
    cin >> target;
    cout << (searchMatrix(a, target) ? "FOUND" : "NOT_FOUND");
    return 0;
}
