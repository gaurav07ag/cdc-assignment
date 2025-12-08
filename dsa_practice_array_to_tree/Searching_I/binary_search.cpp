#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& a, int target) {
    int l = 0;
    int r = (int)a.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
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
    cout << binarySearch(a, target);
    return 0;
}
