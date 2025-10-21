#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i % 2 == 0)
            dq.push_back(x);
        else
            dq.push_front(x);
    }

    if (n % 2 == 1)
        reverse(dq.begin(), dq.end());

    for (int i = 0; i < n; i++) {
        cout << dq[i] << (i == n - 1 ? '\n' : ' ');
    }
}
