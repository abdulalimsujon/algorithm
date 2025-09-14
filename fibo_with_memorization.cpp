#include <bits/stdc++.h>
using namespace std;

int dp[1005];

long long fibo(long long n) {
    if (n < 2) return n;
    if (dp[n] != -1) return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}

int main() {
    long long n;
    cin >> n;

    memset(dp,-1,sizeof(dp));

    cout << fibo(n) << endl;
    return 0;
}
