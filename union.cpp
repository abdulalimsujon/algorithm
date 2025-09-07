#include<bits/stdc++.h>
using namespace std;
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


    dsu_union(1, 2);

    for (int i = 0; i < 6;i++){
        cout << i << "===" << par[i] << endl;
    }
}
