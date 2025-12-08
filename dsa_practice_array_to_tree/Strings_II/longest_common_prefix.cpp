#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string pref = strs[0];
    for (int i = 1; i < (int)strs.size(); ++i) {
        while (!pref.empty() && strs[i].find(pref) != 0) {
            pref.pop_back();
        }
        if (pref.empty()) break;
    }
    return pref;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    cout << longestCommonPrefix(v);
    return 0;
}
