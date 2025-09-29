#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> freq(n + 1, 0);
        int bad = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n && freq[x] == 0) {
                freq[x] = 1;
            } else {
                bad++;
            }
        }
        
        int missing = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing++;
            }
        }
        
        if (missing <= k && bad >= missing) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
