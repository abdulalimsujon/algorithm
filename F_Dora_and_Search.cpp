#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert(v[i]);
        }

        int l = 0, r = n - 1;

        while (l < r) {
            int mn = *s.begin();
            int mx = *--s.end();

            if (v[l] != mn && v[l] != mx && v[r] != mn && v[r] != mx) {
                cout << l + 1 << " " << r + 1 << "\n";
                break;
            }

            if (v[l] == mn || v[l] == mx) {
                s.erase(v[l]);
                l++;
              
            }
            if (v[r] == mn || v[r] == mx) {
                s.erase(v[r]);
                r--;
          
            }
          
        }

        if (l >= r) {
            cout << "-1\n"; 
        }
    }
    return 0;
}
