#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    int odd_count = 0;
    int odd_index = -1;

    // Check how many characters have odd frequency
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string first_half = "", middle = "";

    // Build the first half and the middle part
    for (int i = 0; i < 26; ++i) {
        string part(freq[i] / 2, 'A' + i);
        first_half += part;
        if (freq[i] % 2 != 0) {
            middle = string(freq[i], 'A' + i);
        }
    }

    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());

    cout << first_half + middle + second_half << '\n';

    return 0;
}
