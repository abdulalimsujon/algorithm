#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> adj_list; 
vector<long long> dist;
vector<int> parent;

void dijkstra(int src){
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){
        auto [par_dis, par_node] = pq.top();
        pq.pop();

        if(par_dis > dist[par_node]) continue;

        for(auto [child_node, child_dis] : adj_list[par_node]){
            if(par_dis + child_dis < dist[child_node]){
                dist[child_node] = par_dis + child_dis;
                parent[child_node] = par_node;
                pq.push({dist[child_node], child_node});
            }
        }
    }
}

vector<int> get_path(int src, int dest){
    vector<int> path;
    if(dist[dest] == LLONG_MAX) return path; 

    for(int v = dest; v != -1; v = parent[v]){
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return path;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    adj_list.assign(n+1, vector<pair<int,int>>());
    dist.assign(n+1, LLONG_MAX);
    parent.assign(n+1, -1);

    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c}); 
    }

    dijkstra(1);

    vector<int> path = get_path(1, n);

    if(path.empty()){
        cout << -1 << "\n";
    } else {
        for(int v : path) cout << v << " ";
        cout << "\n";
    }
}
