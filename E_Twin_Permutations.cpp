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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) v.push_back({a[i], i});

        sort(v.begin(), v.end()); // sort by a[i]

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            // assign b = 1..n in increasing order of a
            b[v[i].second] = i + 1;
        }

        for (int i = 0; i < n; i++)
            cout << b[i] << (i + 1 == n ? '\n' : ' ');
    }

    return 0;
}
