#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
    cin >> n;
   long long int arr[n],count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n;i++){
        if(arr[i-1] > arr[i]){
            int add = arr[i - 1] - arr[i];
            count += add;
             arr[i] = arr[i - 1]; 
        }
    }

    cout << count << endl;
    return 0;
}
