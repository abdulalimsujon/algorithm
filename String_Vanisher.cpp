#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int count = 0;

        while (!s.empty()) {
            string str = "";
            for (int i = 1; i < s.size(); i += 2) {
                str += s[i];
            }
            s = str;
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}
