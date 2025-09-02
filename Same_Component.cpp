#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj) {
    vis[si][sj] = true;
    for (int k = 0; k < 4; k++) {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int si, sj, ei, ej;
    cin >> si >> sj;
    cin >> ei >> ej;

    memset(vis, false, sizeof(vis));

    if (grid[si][sj] == '.') {
        dfs(si, sj);
    }

    if (vis[ei][ej]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
