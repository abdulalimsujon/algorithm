#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 

    vector<int> v(n), cnt(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    for (int i = 0; i < m; i++) {
        int pos;
        cin >> pos; 
        cout << cnt[pos - 1] << '\n';
    }

    return 0;
}
