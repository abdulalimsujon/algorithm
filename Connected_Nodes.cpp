#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,e;
    cin >> n >> e;

    vector<int> adj_list[n];

   while(e--){
    int a,b;
    cin >> a >> b;

    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
   }
  
   int t;
   cin >> t;
   while(t--){
    
   int q;
     cin >> q;
       vector<int> v;

       if(adj_list[q].empty()){
          v.push_back(-1);
       }else{
          for(int x : adj_list[q]){
      
          v.push_back(x);
      }

       }
 
      sort(v.begin(), v.end(),greater<int>());
      for(int c : v){
        cout << c << " ";
      }
      cout  << endl;
   
   }
}