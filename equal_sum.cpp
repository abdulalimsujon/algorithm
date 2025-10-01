#include<bits/stdc++.h>
using namespace std;
 int a[1005];
 int dp[1005][1005];

 bool subset_sum(int i,int sum){

    if(i<0){
        if(sum == 0) return true;
        else return false;
    }

    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }

    if(a[i]<=sum){
        bool opt1 = subset_sum(i-1,sum - a[i] );
        bool opt2= subset_sum(i-1,sum);
        
        dp[i][sum]= opt1 || opt2;

        return dp[i][sum];
    }else{
        dp[i][sum] =  subset_sum(i-1,sum);
        return dp[i][sum];
    }

 }
int main(){
    int n;
    cin >> n;
    int count = 0;
   
    for(int i=0;i<n;i++){
        cin >> a[i];
        count += a[i];
    }
    
    memset(dp,-1,sizeof(dp));
    
    if(subset_sum(n-1,count/2)){
        cout << "possible" << '\n';
    }else{
        cout << "not possible" << '\n';
    }

}
