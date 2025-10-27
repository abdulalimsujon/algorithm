#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    int customer = 1;

    for (int i = 1; i <= n;i++){

        int type;
        cin >> type;
        if(type == 1){
            int money;
            cin >> money;
            s.insert({customer, money});
            ml.insert({money, -customer});
            customer++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second   ;
            int money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, money});
        }
    }

    for(auto a : ans){
        cout << a << " " ;
    }
    cout << '\n';

    return 0;
}
