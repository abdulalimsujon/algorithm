#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n;
        int m, q;
        cin >> n >> m >> q; 
        long long b1, b2;
        cin >> b1 >> b2;
        if (b1 > b2) swap(b1, b2);
        long long a;
        cin >> a;
        long long ans;
        if (a < b1) ans = b1 - a;
        else if (a > b2) ans = a - b2;
        else ans = min(a - b1, b2 - a);
        cout << ans << '\n';
    }
    return 0;
}
