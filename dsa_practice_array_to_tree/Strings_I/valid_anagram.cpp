#include <bits/stdc++.h>
using namespace std;

bool isAnagram(const string& a, const string& b) {
    if (a.size() != b.size()) return false;
    array<int, 256> cnt{};
    cnt.fill(0);
    for (unsigned char c : a) ++cnt[c];
    for (unsigned char c : b) {
        if (--cnt[c] < 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    if (!getline(cin, a)) return 0;
    if (!getline(cin, b)) return 0;
    cout << (isAnagram(a, b) ? "YES" : "NO");
    return 0;
}
