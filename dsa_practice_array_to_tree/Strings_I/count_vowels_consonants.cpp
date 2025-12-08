#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!getline(cin, s)) return 0;
    long long vowels = 0;
    long long consonants = 0;
    for (char c : s) {
        if (isalpha(static_cast<unsigned char>(c))) {
            if (isVowel(c)) ++vowels;
            else ++consonants;
        }
    }
    cout << vowels << " " << consonants;
    return 0;
}
