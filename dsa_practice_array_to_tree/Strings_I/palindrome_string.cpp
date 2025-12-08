#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
    int i = 0;
    int j = (int)s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        ++i;
        --j;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    cout << (isPalindrome(s) ? "YES" : "NO");
    return 0;
}
