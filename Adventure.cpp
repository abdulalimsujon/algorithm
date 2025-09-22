#include <bits/stdc++.h>
using namespace std;

int weight[1005];
int value[1005];
int dp[1005][1005]; 

int knapsack(int i, int w) {

    if (i < 0 || w == 0) return 0; 

    if (dp[i][w] != -1) return dp[i][w];

    if (weight[i] > w) {
        dp[i][w] = knapsack(i - 1, w);
    } else {
        
        int opt1 = knapsack(i - 1, w);
        int opt2 = value[i] + knapsack(i - 1, w - weight[i]);
        dp[i][w] = max(opt1, opt2);
    }
    return dp[i][w];
}

int main() {
    int t; cin >> t;

    while (t--) {
        int n, W;
        cin >> n >> W;

        for (int i = 0; i < n; i++){
            cin >> weight[i];
        } 
        for (int i = 0; i < n; i++) {
              cin >> value[i];
        }

       
        for (int i = 0; i <= n; i++){
           for (int w = 0; w <= W; w++){
              dp[i][w] = -1;
           }
                
        }
            
        cout << knapsack(n - 1, W) << "\n";
    }

    return 0;
}
