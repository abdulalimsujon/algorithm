#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0, d = 0 , l=0 ,r = n-1;
    bool turn = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
      }

    while(l<=r){
        int pick;
        if (v[l] > v[r])
        {
            pick = v[l];
            l++;
        }
        else
        {
            pick = v[r];
            r--;
        }

        if(turn){
            s += pick;
        }else{
            d += pick;
        }

        turn = !turn;
    }

    cout << s << " " << d << endl;

    return 0;
}
