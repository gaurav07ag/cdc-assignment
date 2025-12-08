#include <bits/stdc++.h>
using namespace std;

vector<int> unionSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> res;
    int i = 0;
    int j = 0;
    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] < b[j]) {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            ++i;
        } else if (b[j] < a[i]) {
            if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
            ++j;
        } else {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            ++i;
            ++j;
        }
    }
    while (i < (int)a.size()) {
        if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
        ++i;
    }
    while (j < (int)b.size()) {
        if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
        ++j;
    }
    return res;
}

vector<int> intersectionSorted(const vector<int>& a, const vector<int>& b) {
    vector<int> res;
    int i = 0;
    int j = 0;
    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] < b[j]) {
            ++i;
        } else if (b[j] < a[i]) {
            ++j;
        } else {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            ++i;
            ++j;
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int j = 0; j < m; ++j) cin >> b[j];
    vector<int> uni = unionSorted(a, b);
    vector<int> inter = intersectionSorted(a, b);
    for (int i = 0; i < (int)uni.size(); ++i) {
        if (i) cout << ' ';
        cout << uni[i];
    }
    cout << "\n";
    for (int i = 0; i < (int)inter.size(); ++i) {
        if (i) cout << ' ';
        cout << inter[i];
    }
    return 0;
}
