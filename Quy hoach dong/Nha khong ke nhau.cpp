/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int f[1000007];
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        f[0]=a[0];
        f[1]=max(a[0],a[1]);
        int res=0;
        for(int i=2;i<n;i++){
            f[i]=max(f[i-1],f[i-2]+a[i]);
            res=max(f[i],res);
        }
        cout<<res<<endl;
    }

}
