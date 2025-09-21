#include<bits/stdc++.h>
using namespace std;

int tetranacci(int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;


    if (dp[n] != -1) return dp[n];


    dp[n] = tetranacci(n - 1, dp) + tetranacci(n - 2, dp) +
              tetranacci(n - 3, dp) + tetranacci(n - 4, dp);

    return dp[n];
}

int main() {
    int n;
    cin >> n;

   
    vector<int> dp(n+1, -1);

  
    cout << tetranacci(n, dp) << endl;

    return 0;
}
