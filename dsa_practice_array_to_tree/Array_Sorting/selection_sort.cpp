#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& a) {
    int n = (int)a.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[minIdx]) minIdx = j;
        }
        if (minIdx != i) swap(a[i], a[minIdx]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    selectionSort(a);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    return 0;
}
