#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int consequces = 0;
        int count = 0 ;
        for(char c : s){
            if(c=='.'){           
                consequces++;
                count++;
                if(consequces==3) break;
            }else{
                consequces = 0;
            }
            
        }

        if(consequces==3){
            cout << 2 << endl;
        }else{
            cout << count << endl;
        }
    }
    return 0;
}
