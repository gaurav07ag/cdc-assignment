#include <bits/stdc++.h>
using namespace std;

int countElementsWithMaxFrequency(const vector<int>& a) {
    unordered_map<int,int> freq;
    for (int x : a) ++freq[x];
    int maxFreq = 0;
    for (auto& p : freq) {
        if (p.second > maxFreq) maxFreq = p.second;
    }
    int countMax = 0;
    for (auto& p : freq) {
        if (p.second == maxFreq) ++countMax;
    }
    return countMax;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << countElementsWithMaxFrequency(a);
    return 0;
}
