#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    map<string, int> mp;

    while (t--) {

        string s;
        cin >> s;

        if (mp.empty() || mp[s] == 0) {
            mp[s]++;
            cout << "OK" << '\n';
        } else {
            cout << s << mp[s] << '\n';
            mp[s + to_string(mp[s])]++; 
            mp[s]++; 
        }
    }

    return 0;
}
