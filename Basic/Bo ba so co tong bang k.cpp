#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int k){
    int cnt=0;
     for(int i=0;i<n;i++){
             int l=i+1,r=n-1;
             while(l<r){
                 if(a[i]+a[l]+a[r]<k) {
                    l++;
                    cnt++;
                 }
                else r--;
             }
    }
        return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        if(check(a,n,k)) cout<<"YES\n";
        else cout<<"NO\n";
       
    }
}