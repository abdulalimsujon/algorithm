#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        vector<long long> a(3);
        
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
         
        }
    
         auto mn = min_element(a.begin(),a.end());
      
      cout << *mn << "\n";
   
    

    return 0;
}
