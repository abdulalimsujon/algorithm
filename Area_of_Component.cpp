#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int cnt = 1;  

    for (int i = 0 ; i <4 ; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            cnt += dfs(ci, cj);
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int mn = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') {
                int size = dfs(i, j);
                mn = min(mn, size);
                found = true;
            }
        }
    }

    if (found) cout << mn << "\n";
    else cout << -1 << "\n";

    return 0;
}
