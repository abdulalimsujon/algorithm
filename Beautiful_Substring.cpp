#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string S;
    cin >> N >> S;

    int count = 0;
    for (int i = 0; i <= N - 3; i++) {
        string sub = S.substr(i, 3);
        if (sub == "010" || sub == "101") {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
