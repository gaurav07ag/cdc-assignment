#include <bits/stdc++.h>
using namespace std;

string reverseString(const string& s) {
    string t = s;
    int i = 0;
    int j = (int)t.size() - 1;
    while (i < j) {
        swap(t[i], t[j]);
        ++i;
        --j;
    }
    return t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    cout << reverseString(s);
    return 0;
}
