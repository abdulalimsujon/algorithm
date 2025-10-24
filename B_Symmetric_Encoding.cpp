#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string b;
        cin >> b;

        set<char> unique_chars;
        for (char c : b) {
            unique_chars.insert(c);
        }

        vector<char> v(unique_chars.begin(), unique_chars.end());

        map<char, char> mp;

        int len = v.size();
        for (int i = 0; i < len; ++i) {
            mp[v[i]] = v[len - i - 1];
        }

        for (int i = 0; i < n; ++i) {
            b[i] = mp[b[i]];
        }
        cout << b << '\n';
    }

    return 0;
}
