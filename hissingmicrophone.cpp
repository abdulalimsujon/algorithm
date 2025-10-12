#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = s.find("ss");

    if (pos >= 0) {
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }

    return 0;
}

