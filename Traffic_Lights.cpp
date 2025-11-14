#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];

   
    set<int> lights = {0, x};
    
    multiset<int> segments = {x};

    for (int pos : p) {
       
        auto it = lights.upper_bound(pos);
        int right = *it;
        int left = *prev(it);

      
        segments.erase(segments.find(right - left));

        segments.insert(pos - left);
        segments.insert(right - pos);

      
        lights.insert(pos);

        cout << *segments.rbegin() << " ";
    }
}
