#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool lucky = false;
    while (N > 0) {
        int digit = N % 10;  
        if (digit == 7) {
            lucky = true;
            break;            
        }
        N /= 10;           
    }

    if (lucky) cout << "Lucky" << endl;
    else cout << "Not Lucky" << endl;

    return 0;
}
