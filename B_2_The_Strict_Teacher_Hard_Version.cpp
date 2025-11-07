#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int m, q;
        cin >> n >> m >> q;

        vector<long long> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());

        while (q--) {
            long long a;
            cin >> a;

            // Find nearest teacher to the right
            auto it = lower_bound(b.begin(), b.end(), a);

            long long ans = LLONG_MAX;

            if (it != b.end()) {
                long long br = *it; // nearest teacher to the right
                ans = min(ans, br - a);
                ans = min(ans, n - a + br - n); // not needed, simplified below
                ans = min(ans, br - a);
            }

            if (it != b.begin()) {
                long long bl = *(--it); // nearest teacher to the left
                ans = min(ans, a - bl);
            }

            // For hard version, consider running to walls
            // The actual time = min(
            //   min distance to nearest teacher,
            //   max distance to nearest wall + distance of nearest teacher
            // )

            // So correct version:
            it = lower_bound(b.begin(), b.end(), a);
            long long res = LLONG_MAX;

            if (it != b.end()) {
                long long rightTeacher = *it;
                res = min(res, rightTeacher - a + min(a - 1, n - rightTeacher));
            }

            if (it != b.begin()) {
                long long leftTeacher = *(--it);
                res = min(res, a - leftTeacher + min(leftTeacher - 1, n - a));
            }

            cout << res << "\n";
        }
    }
    return 0;
}
