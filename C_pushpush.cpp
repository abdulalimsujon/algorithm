#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    deque<int> dq;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) dq.push_back(a[i]);  
        else dq.push_front(a[i]);           
    }

    if (n % 2 == 1)
        reverse(dq.begin(), dq.end());

    for (int i = 0; i < n; i++) {
        cout << dq[i] << (i + 1 == n ? '\n' : ' ');
    }
}
