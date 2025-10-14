#include <bits/stdc++.h>
using namespace std;
 int sum  = 0; 
int dp(int n) {
    if (n == 0)
        return 0;

    sum += pow(n, 2.0); 
    
     dp(n - 1);

    return sum;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        sum = 0;
        cout << dp(n) << endl;
    }
    return 0;
}
