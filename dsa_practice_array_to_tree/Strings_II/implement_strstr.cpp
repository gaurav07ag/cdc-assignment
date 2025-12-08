#include <bits/stdc++.h>
using namespace std;

int strStr(const string& haystack, const string& needle) {
    if (needle.empty()) return 0;
    int n = (int)haystack.size();
    int m = (int)needle.size();
    if (m > n) return -1;
    for (int i = 0; i + m <= n; ++i) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) ++j;
        if (j == m) return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string haystack, needle;
    if (!getline(cin, haystack)) return 0;
    if (!getline(cin, needle)) return 0;
    cout << strStr(haystack, needle);
    return 0;
}
