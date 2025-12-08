#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(const string& s, const string& t) {
    if (s.size() != t.size()) return false;
    array<int, 256> m1;
    array<int, 256> m2;
    m1.fill(-1);
    m2.fill(-1);
    for (int i = 0; i < (int)s.size(); ++i) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];
        if (m1[c1] == -1 && m2[c2] == -1) {
            m1[c1] = c2;
            m2[c2] = c1;
        } else {
            if (m1[c1] != c2 || m2[c2] != c1) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    if (!getline(cin, s)) return 0;
    if (!getline(cin, t)) return 0;
    cout << (isIsomorphic(s, t) ? "YES" : "NO");
    return 0;
}
