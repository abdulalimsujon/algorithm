#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s, s1;
        cin >> s >> s1;

        map<char, int> mp, mp1;
        for (auto c : s) mp[c]++;
        for (auto c : s1) mp1[c]++;

        bool ok = true;
        for (auto [ch, cnt] : mp) {
            if (mp1[ch] < cnt) { 
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
