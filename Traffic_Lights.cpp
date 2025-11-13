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
    // Store segment lengths (we'll track how many of each length exist)
    multiset<int> segments = {x};

    for (int pos : p) {
        // Find where the new light goes
        auto it = lights.upper_bound(pos);
        int right = *it;
        int left = *prev(it);

        // Remove the old segment [left, right]
        segments.erase(segments.find(right - left));

        // Add the two new segments
        segments.insert(pos - left);
        segments.insert(right - pos);

        // Insert the new light
        lights.insert(pos);

        // Output the current longest segment
        cout << *segments.rbegin() << " ";
    }
}
