#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool check=false;
        int res=-1;
        for(int i=0;i<n;i++){
             if(a[i]<=k) res=i;
             check=true;
        }
        cout<<res<<endl;
        if(!check) cout<<"-1"<<endl;
    }
}