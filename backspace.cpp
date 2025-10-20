#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> v;

    for (char c : s) {
        if (c != '<') {
            v.push_back(c);
        } else if (!v.empty()) {
            v.pop_back();
        }
    }

    for (char c : v) {
        cout << c;
    }
    cout << endl;

    return 0;
}
