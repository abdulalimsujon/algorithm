#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        map<int, int> cnt;
        for (int i = 0; i < n;i++) {
           cnt[a[i]]++;
        } 

        int ans = 0, prev = -1, prevCount = 0;
        for (auto [x, c] : cnt) {
            if (prev == -1 || x != prev + 1) {
                // new segment, cannot extend
                ans += c;
            } else {
                // can extend some sequences
                ans += max(0, c - prevCount);
            }
            prev = x;
            prevCount = c;
        }

        cout << ans << "\n";
    }
    return 0;
}
