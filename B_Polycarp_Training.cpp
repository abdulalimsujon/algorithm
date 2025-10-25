#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset<int> ml;
    int count = 0, problems = 1;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        ml.insert(x);
    }

    while(!ml.empty()){
        auto lb = ml.lower_bound(problems);
        if(lb != ml.end()){
            count++;
            ml.erase(lb);
        }else{
            break;
        }
        problems++;
    }

    cout << count << '\n';
}
