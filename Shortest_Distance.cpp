#include<bits/stdc++.h>
using namespace std;

long long int adj_mat[105][105];

int main() {
    int n, e;
    cin >> n >> e;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) adj_mat[i][j] = 0;
            else adj_mat[i][j] = LLONG_MAX;
        }
    }
    while (e--) {
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
 
    }


    for (int k = 1; k <= n; k++) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX &&
                adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) {
                adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
        }
    }
}


    int  t;
    cin >> t ;
    while(t--){
        int src,des;
        cin >> src >> des;
         if (adj_mat[src][des] == LLONG_MAX) cout << -1 << "\n";
        else cout << adj_mat[src][des] << "\n";

    }
  
}
