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
    for (auto dir : d) {
        int ci = si + dir.first;
        int cj = sj + dir.second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#') {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;

    int si=-1, sj=-1, di=-1, dj=-1;
  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                si = i; sj = j; 
            }
            if (grid[i][j] == 'B') {
                di = i; dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    if ( grid[si][sj] != '#') {
        dfs(si, sj);
    }

    if ( vis[di][dj]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
