#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    map<pair<string,int>,int> mp;
    while (t--)
    {
        int n;
        cin >> n;
        while(n--){
            string s;
            cin >> s;
            mp[{s, n}]++;
        }
    }

    for(auto p : mp){
        cout << p.first.first << p.d
    }
    return 0;
}
