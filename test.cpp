#include<bits/stdc++.h>
using namespace std;
string a,b;

int lcm(int i,int j){
    if(i<0 || j<0){
        return 0;
    };
    
    if(a[i]==b[j]){
       return  lcm(i-1,j-1)+1;
    }else{
        int opt1 = lcm(i-1,j);
        int opt2= lcm(i,j-1);
        return max(opt1,opt2);
    }

}

int main(){
    cin >> a >> b;

    int s1 =  a.size();
    int s2= b.size();
   cout <<  lcm(s1-1,s2-1) << " ";

}
