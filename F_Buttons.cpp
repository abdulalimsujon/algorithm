#include<bits/stdc++.h>
using namespace std;
int main(){

    int a, b;
    cin >> a >> b;


     int option1 = 2 * a - 1;
     int option2 = 2 * b - 1;
     int option3 = a + b;
     int maxCoins = max({option1, option2, option3});
     cout << maxCoins << endl;
     return 0;
}
