#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(const vector<int>& a, int target) {
    int l = 0;
    int r = (int)a.size() - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == target) {
            ans = mid;
            r = mid - 1;
        } else if (a[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(const vector<int>& a, int target) {
    int l = 0;
    int r = (int)a.size() - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == target) {
            ans = mid;
            l = mid + 1;
        } else if (a[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
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
    cout << firstOccurrence(a, target) << " " << lastOccurrence(a, target);
    return 0;
}
