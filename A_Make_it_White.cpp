#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_black , last_black ;

        first_black = s.find('B');
        last_black = s.rfind('B');

        int total = last_black - first_black + 1;
        cout << total << '\n';
    }

    return 0;
}
