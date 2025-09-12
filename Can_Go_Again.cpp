#include <bits/stdc++.h>
using namespace std;

long long dis[1005];
int n, e;

class Edge {
public:
    int a, b;
    long long c;
    Edge(int a, int b, long long c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    cin >> n >> e;
    vector<Edge> edge_list;

    for (int i = 0; i < e; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src, q;
    cin >> src >> q;

   
    for (int i = 1; i <= n; i++) {
        dis[i] = LLONG_MAX;
    }
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (auto ed : edge_list) {
            int a = ed.a;
            int b = ed.b;
            long long c = ed.c;

            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
            }
        }
    }

    bool cycle = false;
    for (auto ed : edge_list) {
        int a = ed.a;
        int b = ed.b;
        long long c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b]) {
            cycle = true;
            break;
        }
    }

   
    while (q--) {
        int des;
        cin >> des;
        if (cycle) {
            cout << "Negative Cycle Detected\n";
            break;
        } else {
            if (dis[des] == LLONG_MAX) cout << "Not Possible\n";
            else cout << dis[des] << "\n";
        }
    }

    return 0;
}
