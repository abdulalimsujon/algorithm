#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> u(n);
        for (int i = 0; i < n; i++) cin >> u[i];

        map<long long, int> first, last;

        for (int i = 0; i < n; i++) {
            long long val = u[i];
            if (first.find(val) == first.end())
                first[val] = i; 
            last[val] = i;       
        }

        while (k--) {
            long long a, b;
            cin >> a >> b;

            if (first.count(a) && last.count(b) && first[a] < last[b])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
