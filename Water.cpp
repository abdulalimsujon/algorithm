#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
   
    while (t--) {
      long long  int size;
        cin >> size;
        vector<int> arr(size);

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        vector<pair<int,int>> vp;
        for (int i = 0; i < size; i++) {
            vp.push_back({arr[i], i}); 
        }

     
        sort(vp.begin(), vp.end(), greater<pair<int,int>>());

        int firstMaxIndex = vp[0].second;
        int secondMaxIndex = vp[1].second;

      
        if (secondMaxIndex < firstMaxIndex) {
            cout << secondMaxIndex << " " << firstMaxIndex << "\n";
        } else {
            cout << firstMaxIndex << " " << secondMaxIndex << "\n";
        }
    }
    return 0;
}
