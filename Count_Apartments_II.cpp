#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int lvl[1005][1005];

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}}; 
int n,m;

bool valid(int i,int j) {
    return (i>=0 && i<n && j>=0 && j<m);
}

int bfs(int si,int sj) {
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;

    int cnt = 1;

    while(!q.empty()) {
        auto par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int k=0;k<4;k++) {
            int ci = par_i + d[k].first;
            int cj = par_j + d[k].second;
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]=='.') {
                q.push({ci,cj});
                lvl[ci][cj] = lvl[par_i][par_j] + 1;
                vis[ci][cj] = true;
                cnt++; 
            }
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis,false,sizeof(vis));
    memset(lvl,-1,sizeof(lvl));

    vector<int> v;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(!vis[i][j] && grid[i][j]=='.') {
                int size = bfs(i,j);
                v.push_back(size);
            }
        }
    }

    if(v.empty()) {
        cout << 0 << "\n";  
    } else {
        sort(v.begin(), v.end());
        for(int x:v) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
