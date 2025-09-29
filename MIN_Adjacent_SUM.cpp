#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> A(n);
    for (int i = 0; i < n; i++){
           cin >> A[i];
    } 

    sort(A.begin(), A.end()); 
    cout << A[0] + A[1] << "\n";

    return 0;
}
