#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    while (q--) {
        long long l, r;
        cin >> l >> r;

        long long sum = 0;
        for (long long i = l; i <= r; i++) {
            sum += (i + 1) / 2; 
        }

        cout << sum << endl;
    }

    return 0;
}
