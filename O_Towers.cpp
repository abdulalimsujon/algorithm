#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> tops; 
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        
        auto it = upper_bound(tops.begin(), tops.end(), x);
        if (it == tops.end()) {
            tops.push_back(x); 
        } else {
            *it = x; 
        }
    }
    cout << tops.size() << '\n';
    return 0;
}
