#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<string>> words(3, vector<string>(n));
        map<string, int> freq;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> words[i][j];
                freq[words[i][j]]++;
            }
        }

        vector<int> score(3, 0);
        for (int i = 0; i < 3; i++) {
            for (auto &w : words[i]) {
                if (freq[w] == 1) score[i] += 3;
                else if (freq[w] == 2) score[i] += 1;
    
            }
        }

        cout << score[0] << " " << score[1] << " " << score[2] << "\n";
    }

    return 0;
}
