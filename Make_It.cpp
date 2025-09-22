
#include<bits/stdc++.h>
using namespace std;


int dp[100005];

bool canMake(int current, int target) {
    if (current == target) return true;
    if (current > target) return false;

    if (dp[current] != -1) return dp[current];

    bool addThree = canMake(current + 3, target);
    bool multiplyTwo = canMake(current * 2, target);

    dp[current] = addThree || multiplyTwo;
    return dp[current];
}

int main() {
    int T;
    cin >> T;
    vector<int> testCases(T);
    for (int i = 0; i < T; ++i) {
        cin >> testCases[i];
    }

    for (int i = 0; i < T; ++i) {
        memset(dp, -1, sizeof(dp)); 
        if (canMake(1, testCases[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
