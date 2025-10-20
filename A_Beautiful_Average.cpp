#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        cout << mx << endl;
    }
    return 0;
}
