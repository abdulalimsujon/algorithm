#include <bits/stdc++.h>
using namespace std;

void printCharacter(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c;
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        char C;
        cin >> N >> C;
        printCharacter(N, C);
    }
    return 0;
}