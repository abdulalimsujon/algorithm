#include <bits/stdc++.h>
using namespace std;

// Edge class to represent a graph edge
class Edge {
public:
    int a, b, c;
    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

// Comparator function to sort edges by cost
bool cmp(Edge l, Edge r) {
    return l.c < r.c;
}

int par[1005];     // Parent array for DSU
int gSize[1005];   // Group size array for DSU

// DSU find function with path compression
int find(int node) {
    if (par[node] == -1) return node;
    return par[node] = find(par[node]);
}

// DSU union by size
void dsu_union(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (leader1 != leader2) {
        if (gSize[leader1] > gSize[leader2]) {
            par[leader2] = leader1;
            gSize[leader1] += gSize[leader2];
        } else {
            par[leader1] = leader2;
            gSize[leader2] += gSize[leader1];
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    // Initialize DSU
    memset(par, -1, sizeof(par));
    for (int i = 0; i <= n; i++) gSize[i] = 1;

    vector<Edge> edge_list;

    // Input edges
    for (int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    // Sort edges by cost
    sort(edge_list.begin(), edge_list.end(), cmp);

    int totalCost = 0;

    // Kruskal's Algorithm
    for (auto ed : edge_list) {
        int parA = find(ed.a);
        int parB = find(ed.b);
        if (parA != parB) {
            dsu_union(ed.a, ed.b);
            totalCost += ed.c;
        }
    }

    cout << totalCost << endl;

    return 0;
}
