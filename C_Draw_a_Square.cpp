#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if ((l == 1 && r == 1) || (d == 1 && u == 1)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
