#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int>& a) {
    int cand = 0;
    int cnt = 0;
    for (int x : a) {
        if (cnt == 0) {
            cand = x;
            cnt = 1;
        } else if (x == cand) {
            ++cnt;
        } else {
            --cnt;
        }
    }
    int freq = 0;
    for (int x : a) if (x == cand) ++freq;
    if (freq > (int)a.size() / 2) return cand;
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << majorityElement(a);
    return 0;
}
