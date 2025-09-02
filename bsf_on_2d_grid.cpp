#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int lvl[105][105];

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}}; 
int n,m;
bool valid(int i,int j){
    if(i<0 || i >=n || j <0 || j >=m){
        return false;
    }else{
        return true;
    }

};

void bfs(int si,int sj){
    
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]  =  true;
    lvl[si][sj] = 0;

    while(!q.empty()){
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
          cout << par_i  << " " << par_j << endl;
        for(int i=0;i<4;i++){
            int ci,cj;
            ci = par_i+ d[i].first;
            cj =  par_j + d[i].second; 
            if(!vis[ci][cj] && valid(ci,cj)){
               q.push({ci,cj});
               lvl[ci][cj] = lvl[par_i][par_j] + 1;
               vis[ci][cj] =  true;
            }
        }
    }
};


int main(){


    cin >> n >> m;
    for(int i= 0 ; i < n;i++){
        for(int j=0;j<m ;j++){
            cin >> grid[i][j];
        }
    }

    int si,sj;
    int di,dj;

    cin >> si >> sj >> di >> dj;
    memset(vis,false,sizeof(vis));
    memset(lvl,-1,sizeof(lvl));
    bfs(si,sj);
    
    cout << "===>" << lvl[di][dj];

    return 0;

}
