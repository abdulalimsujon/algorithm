#include<bits/stdc++.h>
using namespace std;

int adj_mat[105][105];

int main() {
    int n, e;
    cin >> n >> e;

    // initialize adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) adj_mat[i][j] = 0;
            else adj_mat[i][j] = INT_MAX;
        }
    }

    // input edges
    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = c;  
        // if graph is undirected, also do:
        // adj_mat[b][a] = c;
    }

    // floyd-warshall
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX &&
                    adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    // print result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj_mat[i][j] == INT_MAX) cout << "INF ";
            else cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
}
