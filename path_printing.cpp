#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int lvl[1005];
int parent[1005];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] =  0;

    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int child: adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                lvl[child] = lvl[par]+1;
                parent[child] = par;
            }
        }
    }
}
int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);  
    }
    memset(vis,false,sizeof(vis));
    memset(lvl,-1,sizeof(lvl));
     memset(parent,-1,sizeof(parent));
    int src ,dst;
    cin >> src >> dst;
    bfs(src);

    // for(int i = 0 ;i <n;i++){
    //     cout << i << "-->" << lvl[i] << endl;
    // }

    int node = dst;
    while(node != -1){
        cout << node << " ";

        node = parent[node];

    }
    cout << lvl[dst] << endl;
    return 0;

}