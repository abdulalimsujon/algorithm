#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;
    for (int i = 0; i < s1.size();i++){
        if(s1[i] != s2[i]){
            count += 1;
        }
    }

    cout << count << endl;
}
