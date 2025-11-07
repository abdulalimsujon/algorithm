#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    multiset<int> numbers;

  
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers.insert(value);
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 0) {
            int x;
            cin >> x;
            numbers.insert(x);
        } 
        else if (type == 1) {
            auto it = numbers.begin(); 
            cout << *it << "\n";
            numbers.erase(it);
        } 
        else if (type == 2) {
            auto it = prev(numbers.end());
            cout << *it << "\n";
            numbers.erase(it);
        }
    }

    return 0;
}
