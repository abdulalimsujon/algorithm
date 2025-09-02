#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
pair<int,int> parent[105][105]; 
int n, m;

vector<pair<int,int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool valid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#');
}

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1,-1};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (auto [dx, dy] : d) {
            int nx = x + dx, ny = y + dy;
            if (valid(nx, ny) && !vis[nx][ny]) {
                vis[nx][ny] = true;
                parent[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    int si, sj, di, dj;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') {
                si = i, sj = j;
            }
            if (grid[i][j] == 'D') {
                di = i, dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    if (!vis[di][dj]) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cout << grid[i][j];
            cout << "\n";
        }
        return 0;
    }
    int x = di, y = dj;
    while (!(x == si && y == sj)) {
        if (grid[x][y] == '.') grid[x][y] = 'X';
        tie(x, y) = parent[x][y];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << grid[i][j];
        cout << "\n";
    }

    return 0;
}
