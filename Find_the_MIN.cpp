#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    vector<long long> v;

    while (q--) {
        long long cmd;
        cin >> cmd; 

        if (cmd == 1) {
            long long x;
            cin >> x;
            v.push_back(x); 
        }
        else if (cmd == 2) {
            if (v.empty()) {
                cout << "empty" << endl;
            } else {
                int mn = INT_MAX;
                for (int i = 0; i < v.size(); i++) {
                    if (v[i] < mn) mn = v[i];
                }
                cout << mn << "\n";

            
                vector<long long> temp;
                for (int i = 0; i < v.size(); i++) {
                    if (v[i] != mn) temp.push_back(v[i]);
                }
                v = temp; 
            }
        }
    }

    return 0;
}
