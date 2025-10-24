#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        long long cnt_a_odd = 0, cnt_a_even = 0;
        long long free_b_even = 0, free_b_odd = 0;


        for(int i = 0; i < n; i++){
            int pos = i + 1;
            if(pos % 2 == 1){
                if(a[i] == '1') cnt_a_odd++;
                if(b[i] == '0') {
        
                    free_b_odd++;
                }
            } else {
                if(a[i] == '1') cnt_a_even++;
                if(b[i] == '0') {
                    free_b_even++;
                }
            }
        }

        bool ok = true;
        if(cnt_a_odd > free_b_even) ok = false;
        if(cnt_a_even > free_b_odd) ok = false;

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
