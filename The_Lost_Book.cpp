#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long book;
    cin >> book;

    long long indx = -1;
    for (long long i = 0; i < n; i++) {
        if (arr[i] == book) {   
            indx = i;
            break;            
        }
    }

    cout << indx << endl;

    return 0;
}
