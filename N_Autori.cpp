#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> v;
    v.push_back(s[0]);
    for (int i = 0; i < s.size(); i++)
    {
    
        if (s[i] == '-' && i+1 < s.size())
        {
            v.push_back(s[i + 1]);
        }
    }

    for(char c : v){
        cout << c ;
    }
    cout << endl;

    return 0;
}
