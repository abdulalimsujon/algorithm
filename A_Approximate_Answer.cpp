#include<bits/stdc++.h>
using namespace std;


int main() {
    int X, Y, K;
    cin >> X >> Y >> K;


    if (abs(X - Y) <= K) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
