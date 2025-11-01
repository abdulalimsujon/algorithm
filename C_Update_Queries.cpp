#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> ind(m);
        for (int i = 0; i < m; i++) cin >> ind[i];
        string c;
        cin >> c;

        // Unique sorted indices (convert to 0-based)
        sort(ind.begin(), ind.end());
        ind.erase(unique(ind.begin(), ind.end()), ind.end());

        // Sort characters
        sort(c.begin(), c.end());

        // Apply smallest letters to smallest positions
        for (int i = 0; i < (int)ind.size(); i++) {
            s[ind[i] - 1] = c[i];
        }

        cout << s << "\n";
    }
    return 0;
}
