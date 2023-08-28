#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int main(){
    run();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      int j=0;
      int res=0;
      while(j<=n-k){
        res=0;
        for(int x=j; x<j+k; x++){
          res=max(res, a[x]);
          }
          cout<<res<<" ";
          j++;
        }
        cout<<endl;
      }
      
    }