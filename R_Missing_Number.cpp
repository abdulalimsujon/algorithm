#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
     set<int> s;
    for (int i = 0; i < n-1;i++){
        int a;
        cin >> a;
        s.insert(a);
    }

   for (int i = 1; i <= n;i++){
         if(s.find(i) == s.end()){
             cout << i << endl;
             break;
         }
    }

    return 0;
}
