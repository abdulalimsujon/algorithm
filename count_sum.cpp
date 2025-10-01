#include<bits/stdc++.h>
using namespace std;
 int a[1005];
 int dp[1005][1005];

 int subset_sum(int i,int sum){

    if(i<0){
        if(sum == 0) return 1;
        else return 0;
    }

    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }

    if(a[i]<=sum){
        int opt1 = subset_sum(i-1,sum - a[i] );
        int opt2= subset_sum(i-1,sum);
        
        dp[i][sum]= opt1 + opt2;

        return dp[i][sum];
    }else{
        dp[i][sum] =  subset_sum(i-1,sum);
        return dp[i][sum];
    }

 }
int main(){
    int n;
    cin >> n;
   
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    memset(dp,-1,sizeof(dp));
   
    cout << subset_sum(n-1,sum) << '\n';

}
