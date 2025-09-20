#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[15][15];
int dp[15][15]; 

int rec(int i, int j) {
    if (i >= N || j >= M) return INT_MIN; 
    if (i == N-1 && j == M-1) return A[i][j]; 
    
    if (dp[i][j] != INT_MIN) return dp[i][j]; 
    
    int down = rec(i+1, j);
    int right = rec(i, j+1);
    
    return dp[i][j] = A[i][j] + max(down, right);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            dp[i][j] = INT_MIN;
        }
    }
    
    cout << rec(0, 0) << "\n";
    return 0;
}
