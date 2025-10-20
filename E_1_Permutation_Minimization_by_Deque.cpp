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

        deque<int> dq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (dq.empty() || x > dq.front()) {
                dq.push_back(x);
            } else {
                dq.push_front(x);
            }
        }

        for (auto val : dq) cout << val << " ";
        cout << '\n';
    }

    return 0;
}
