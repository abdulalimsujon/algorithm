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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;

            if (s.size() != n) {
                cout << "NO\n";
                continue;
            }

            map<char, int> mp;
            map<int, char> rev;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                char c = s[i];
                int val = v[i];

                if (mp.count(c) && mp[c] != val) ok = false;
                if (rev.count(val) && rev[val] != c) ok = false;

                mp[c] = val;
                rev[val] = c;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
