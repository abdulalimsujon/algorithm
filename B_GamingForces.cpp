#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) cin >> h[i];
        
        if (n == 1) {
            cout << h[0] << '\n';
        } else if (n == 2) {
            int a = h[0], b = h[1];
            if (a < b) swap(a, b);
            cout << min(a, (a + b + 1) / 2) << '\n';
        } else {
            // For 3 or more monsters
            sort(h.begin(), h.end(), greater<int>());
            int a = h[0], b = h[1];
            cout << min(a, (a + b + 1) / 2) << '\n';
        }
    }
    return 0;
}
