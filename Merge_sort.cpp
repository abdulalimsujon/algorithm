#include<bits/stdc++.h>
using namespace std;


void conquer(int C[],int l,int mid ,int r){
    
    int n = mid-l+1;
    int A[n];
    int k = l;
    for(int i=0;i<n;i++,k++){
       A[i] = C[k];

    }
    int m = r-mid;
    int B[m];
    k = mid+1;
    for(int i=0;i<m;i++,k++){
       B[i] = C[k];
    }
    int i=0,j=0,curr=l;
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
void devide(int a[],int l,int r){
   if(l>=r) return;
    int mid = (l+r)/2;
    devide(a,l,mid);
    devide(a,mid+1,r );
    conquer(a,l,mid,r);

}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    devide(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}    