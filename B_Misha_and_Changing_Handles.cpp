#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, string> ans;   
    map<string, string> has;  

    while(t--) {
        string a, b;
        cin >> a >> b;

        if(has.find(a) != has.end()) {
            string orig = has[a];   
            ans[orig] = b;        
            has.erase(a);           
            has[b] = orig;          
        } 
        else {
            ans[a] = b;              
            has[b] = a;        
        }
    }

    cout << ans.size() << "\n";
    for(auto &p : ans) {
        cout << p.first << " " << p.second << "\n";
    }
}
