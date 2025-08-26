#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int adj_matrix[n][n];
    memset(adj_matrix, 0, sizeof(adj_matrix));

   
    for (int i = 0; i < n; i++) {
        adj_matrix[i][i] = 1;
    }


    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj_matrix[a][b] = 1; 
    }

    int t;
    cin >> t;
    while (t--) {
        int qi, qj;
        cin >> qi >> qj;

        if (adj_matrix[qi][qj] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
