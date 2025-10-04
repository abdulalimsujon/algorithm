#include<bits/stdc++.h>
using namespace std;

void devide(int a[],int l,int r){
   if(l>=r) return;
    int mid = (l+r)/2;
    devide(a,l,mid);
    devide(a,mid+1,r );
}
void conquer(){
    int n,m;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
       cin >> A[i];
    }
    cin >> m;
    int B[m];
    for(int j=0;j<m;j++){
        cin >> B[j];
    }
    int C[n+m];
    int i=0,j=0,curr=0;
    while(i<n && j < m){
        if(A[i]<B[j]){
            C[curr] = A[i]; 
            i++;
            curr++;
        }else{
          C[curr] = B[j]; 
            j++;
            curr++;
        }
    }

  while(i<n){
        C[curr] = A[i];
        i++;
        curr++;
    }
    

    while(j<m){
        C[curr] = B[j];
        j++;
        curr++;
    }
}
int main(){
 

    return 0;
}    