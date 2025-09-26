#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<char> v = {'a','e','i','o','u'};
        
        int n ;
        cin >> n;
        int i = 0 ;
        string ans = "";
        while(n--){
           ans += v[i];
           i++;
           if(i==5) i = 0;
        }

           sort(ans.begin(),ans.end());
           cout << ans << endl;
    }


}
