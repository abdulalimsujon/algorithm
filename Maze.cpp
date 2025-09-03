#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int lvl[1005][1005];
pair<int,int> parent[1005][1005]; 
int n, m;
int si, sj, di, dj;

vector<pair<int,int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#');
}

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;

    while (!q.empty()) {
        auto [p_i, p_j] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = p_i + d[i].first;
            int cj = p_j + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj]) {
                vis[ci][cj] = true;
                lvl[ci][cj] = lvl[p_i][p_j] + 1;
                parent[ci][cj] = {p_i, p_j};
                q.push({ci, cj});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') si = i, sj = j;
            if (grid[i][j] == 'D') di = i, dj = j;
        }
    }

    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));

    bfs(si, sj);   

    if (vis[di][dj]) {   
        int x = di, y = dj;
        while (!(x == si && y == sj)) {
            pair<int,int> p = parent[x][y];
            if (p.first== -1 && p.second == -1) break;
            if (!(x == di && y == dj) && !(x == si && y == sj)) {
                grid[x][y] = 'X';
            }
            x = p.first;
            y = p.second;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
           cout << grid[i][j];
           
        } 
        cout << "\n";
    }
   
    return 0;
}
