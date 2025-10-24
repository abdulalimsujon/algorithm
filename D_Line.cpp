#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<ll> gains;
        ll base = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                base += i;
                ll gain = (n - i - 1) - i;
                if (gain > 0) gains.push_back(gain);
            } else {
                base += (n - i - 1);
                ll gain = i - (n - i - 1);
                if (gain > 0) gains.push_back(gain);
            }
        }

        sort(gains.rbegin(), gains.rend());

        vector<ll> result(n);
        ll current = base;
        for (int k = 0; k < n; ++k) {
            if (k < (int)gains.size()) {
                current += gains[k];
            }
            result[k] = current;
        }

        for (ll val : result) {
            cout << val << ' ';
        }
        cout << '\n';
    }

    return 0;
}
