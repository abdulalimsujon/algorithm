#include<bits/stdc++.h>
using namespace std;
int val[1005],w[1005];

int knapsack(int i,int max_weight){
     
    if(i<0 || max_weight <= 0){
        return 0;
    }

    if(w[i] <= max_weight){
         int opt1 = knapsack(i-1,max_weight-w[i]) + val[i];
         int opt2 = knapsack(i-1,max_weight); 
             return max(opt1,opt2);
    }else{
        return knapsack(i-1,max_weight); 
    }

}
int main(){

    int n,max_weight;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> val[i];
    };

    for(int i=0;i<n;i++){
        cin >> w[i];
    };

    cin >> max_weight;

   cout << knapsack(n-1,max_weight) << endl;

}
