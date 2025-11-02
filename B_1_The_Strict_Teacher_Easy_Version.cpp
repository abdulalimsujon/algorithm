#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, q;
        cin >> n >> m >> q;

        long long t1, t2;
        cin >> t1 >> t2; 

        if (t1 > t2) swap(t1, t2);

        long long david;
        cin >> david;

        long long ans;
        if (david < t1)
            ans = t1 - david;
        else if (david > t2)
            ans = david - t2;
        else
            ans = min(david - t1, t2 - david);

        cout << ans << '\n';
    }
}
