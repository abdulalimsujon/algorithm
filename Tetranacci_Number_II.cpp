#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    if (n == 3) {
        cout << 2 << endl;
        return 0;
    }

  
    long long tetr[105];
    tetr[0] = 0;
    tetr[1] = 1;
    tetr[2] = 1;
    tetr[3] = 2;

    for (int i = 4; i <= n; i++) {
        tetr[i] = tetr[i - 1] + tetr[i - 2] + tetr[i - 3] + tetr[i - 4];
    }

    cout << tetr[n] << endl;

    return 0;
}
