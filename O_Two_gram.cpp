#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;
    string ans;
    int maxCount = 0;

    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        freq[twoGram]++;
        if (freq[twoGram] > maxCount) {
            maxCount = freq[twoGram];
            ans = twoGram;
        }
    }

    cout << ans << endl;
    return 0;
}
