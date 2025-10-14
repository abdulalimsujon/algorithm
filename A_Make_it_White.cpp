#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_black = -1, last_black = -1;

        // find first and last 'B'
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (first_black == -1) first_black = i;
                last_black = i;
            }
        }

        int total = last_black - first_black + 1;
        cout << total << '\n';
    }

    return 0;
}
