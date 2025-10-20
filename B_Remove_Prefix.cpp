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
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int, int> freq;
        int right = n - 1;

       
        while (right >= 0 && freq[a[right]] == 0) {
            freq[a[right]]++;
            right--;
        }

        cout << right + 1 << '\n'; 
    }

    return 0;
}
