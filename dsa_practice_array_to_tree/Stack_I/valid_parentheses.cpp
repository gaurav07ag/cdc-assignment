#include <bits/stdc++.h>
using namespace std;

bool isValid(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') st.push(c);
        else {
            if (st.empty()) return false;
            char t = st.top();
            st.pop();
            if (c == ')' && t != '(') return false;
            if (c == '}' && t != '{') return false;
            if (c == ']' && t != '[') return false;
        }
    }
    return st.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    cout << (isValid(s) ? "YES" : "NO");
    return 0;
}
