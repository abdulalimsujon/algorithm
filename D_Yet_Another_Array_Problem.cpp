#include <bits/stdc++.h>
using namespace std;

long long my_gcd(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long g = a[0];
        for (int i = 1; i < n; i++)
            g = my_gcd(g, a[i]);

        long long ans = -1;
        for (long long x = 2; x <= 1000000; x++) {
            if (my_gcd(g, x) == 1) {
                ans = x;
                break;
            }
        }

        if (ans == -1) ans = g + 1;
        cout << ans << "\n";
    }

    return 0;
}
