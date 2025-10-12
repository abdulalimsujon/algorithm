#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool present[26] = {false}; 

    for (int i = 0; i < s.size(); i++) {
        present[s[i] - 'a'] = true; 
    }

    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}
