#include <bits/stdc++.h>
using namespace std;
bool vis[105];
bool path_vist[105];
vector<int> adj_list[105];
bool cycle;
void dfs(int src)
{
    vis[src] = true;
    path_vist[src] = true;
    for (int child : adj_list[src])
    {

        if (vis[child] && path_vist[child])
        {
            cycle = true;
        }
        if (!vis[child])
        {

            dfs(child);
        }
    }

    path_vist[src] = false;
}
int main()
{
    int e, n;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(path_vist, false, sizeof(path_vist));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
    {
        cout << "cycle detected" << endl;
    }
    else
    {
        cout << "cycle not detected" << endl;
    }
    return 0;
}
