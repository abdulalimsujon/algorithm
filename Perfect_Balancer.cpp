#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> A(n);
    long total = 0;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
       total += A[i];
    }

    long long leftTotal = 0;
    for(int i = 0; i < n; i++) {
        long long rightTotal =total - leftTotal - A[i];
        if(leftTotal == rightTotal) {
            cout << leftTotal + A[i] << " " << i + 1 << "\n";
            return 0; 
        }
        leftTotal += A[i];
    }

    cout << "UNSTABLE\n" ; 
    return 0;
}
