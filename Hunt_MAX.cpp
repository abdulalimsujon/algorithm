#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<int, int> mp; 
    priority_queue<pair<long long int, long long int>> pq; 

    while (q--) {
        int cmd;
        cin >> cmd;

        if (cmd == 1) {
            int x;
            cin >> x;
            mp[x]++;
            pq.push({mp[x], x});
        } 
        else if(cmd==2) { 
        
            while (!pq.empty() && mp[pq.top().second] != pq.top().first) {
                pq.pop();
            }

            if (pq.empty()) {
                cout << "empty\n";
            } 
            else {
                int val = pq.top().second;
                cout << val << "\n";

                int remove = max(1, mp[val] - 1);
                mp[val] -= remove;

                if (mp[val] > 0) {
                    pq.push({mp[val], val});
                }
             
            }
        }
    }

    return 0;
}
