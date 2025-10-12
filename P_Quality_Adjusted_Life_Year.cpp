#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    double sum = 0;
    while (t--) {
        float q, y;
        cin >> q >> y; 
        sum += q * y;
    }

  printf("%.3f\n", sum); 
    return 0;
}
