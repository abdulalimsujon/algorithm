#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (isPalindrome(a)) {
            // array is palindrome → break symmetry
            for (int i = 1; i <= k; i++) {
                cout << i << (i == k ? '\n' : ' ');
            }
        } else {
            // array not palindrome → append same number to keep it stable
            for (int i = 0; i < k; i++) {
                cout << 1 << (i + 1 == k ? '\n' : ' ');
            }
        }
    }
    return 0;
}
