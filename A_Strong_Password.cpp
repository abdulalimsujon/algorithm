#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i;
        for (i = 1; i < s.size(); i++) {
            if(s[i] == s[i-1]){
                break;  
            }
        }
        if(i == s.size()) {
            if(s.back() == 'w') {
                s.push_back('t');
            } else {
                s.push_back('w');
            }
        } else {
            if(s[i-1] == 'w'){
                s.insert(s.begin() + i, 't');
            } else{
                s.insert(s.begin() + i, 'w');
            }
        }

        cout << s << endl;
    }

    return 0;
}
