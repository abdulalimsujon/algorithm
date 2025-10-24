#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> messages(n);
    map<string, bool> seen;

    for (int i = 0; i < n; ++i) {
        cin >> messages[i];
    }

    vector<string> result;

    for (int i = n - 1; i >= 0; --i) {
        string name = messages[i];
        if (!seen[name]) {
            result.push_back(name);
            seen[name] = true;
        }
    }

    for (const string name : result) {
        cout << name << '\n';
    }

    return 0;
}
