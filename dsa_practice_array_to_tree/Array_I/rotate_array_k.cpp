#include <bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>& a, int k) {
    int n = (int)a.size();
    if (n == 0) return;
    k %= n;
    if (k < 0) k += n;
    rotate(a.begin(), a.begin() + k, a.end());
}

void rotateRight(vector<int>& a, int k) {
    int n = (int)a.size();
    if (n == 0) return;
    k %= n;
    if (k < 0) k += n;
    rotate(a.begin(), a.begin() + (n - k) % n, a.end());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    char dir;
    int k;
    cin >> dir >> k;
    if (dir == 'L' || dir == 'l') rotateLeft(a, k);
    else rotateRight(a, k);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    return 0;
}
