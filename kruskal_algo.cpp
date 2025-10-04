#include<bits/stdc++.h>
using namespace std;
class Edge{
    int a, b, c;
    public:
    Edge (int a ,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int par[1005];
int gSize[1005];
int find(int node)
{
    if(par[node]== -1){
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1,int node2){

    int leader1 = find(node1);
    int leader2 = find(node2);
    if(gSize[leader1] > gSize[leader2]){
        par[leader2] = leader1;
        gSize[leader1] += gSize[leader2];
    }else{
         par[leader1] = leader2;
        gSize[leader2] += gSize[leader1];  
    }
}
int main()
{
       memset(par, -1, sizeof(par));
       memset(gSize, 1, sizeof(gSize));
       int n, e;
       int totalCost = 0;
       cin >> n >> e;
       vector<Edge> edge_list;
       while (e--)
       {
           int a, b, c;
           cin >> a >> b >> c;
           edge_list.push_back(Edge(a, b, c));
       };
       bool cmp(Edge l, Edge r)
       {
           return l.c < r.c;
       };
       sort(edge_list.begin(), edge_list.end(), cmp);

       for (auto ed : edge_list)
       {
           int parA = find(ed.a);
           int parB = find(ed.b);
           if(parA != parB){
               dsu_union(ed.a, ed.b);
               totalCost += ed.c;
           }
       }

       cout << totalCost << "";
       return 0;
}
