#include <bits/stdc++.h>
using namespace std;
int n, m;
bool vis[105][105];
int lvl[105][105];

vector<pair<int,int>> d = {
    {2,1},{2,-1},{-2,1},{-2,-1},
    {1,2},{1,-2},{-1,2},{-1,-2}
};

bool valid(int i,int j){
     if(i<0 || i >=n || j <0 || j >=m){ 
        return false; 
    }else{
     return true;
    
    } };
int bfs(int si, int sj, int di, int dj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;

    while (!q.empty()) {
        auto par = q.front();
         q.pop();
        int pi = par.first;
        int pj = par.second;

        if (pi == di && pj == dj) {
            return lvl[pi][pj]; 
        }

        for (int i = 0 ; i < 8 ;i++) {
            int ci = pi + d[i].first;
            int cj = pj +  d[i].second;

            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                lvl[ci][cj] = lvl[pi][pj] + 1;
            }
        }
    }

    return -1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;  
        int si, sj, di, dj;
        cin >> si >> sj; 
        cin >> di >> dj; 

        memset(vis, false, sizeof(vis));
        memset(lvl, -1, sizeof(lvl));

        cout << bfs(si, sj, di, dj) << "\n";
    }
    return 0;
}
