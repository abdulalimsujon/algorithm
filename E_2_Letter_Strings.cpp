#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<char, char>> v(n);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            v[i] = {s[0], s[1]};
        }

        long long ans = 0;
        map<pair<char, char>, long long> freq;
        set<char> firstChars, secondChars;

        for (auto [a, b] : v) {
    
            for (char c : firstChars) {
                if (c == a) continue;
                pair<char, char> p = {c, b};
                if (freq.count(p)) ans += freq[p];
            }

            for (char c : secondChars) {
                if (c == b) continue;
                pair<char, char> p = {a, c};
                if (freq.count(p)) ans += freq[p];
            }

            freq[{a, b}]++;
            firstChars.insert(a);
            secondChars.insert(b);
        }

        cout << ans << '\n';
    }

    return 0;
}
