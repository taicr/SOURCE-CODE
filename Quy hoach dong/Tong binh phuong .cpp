/* */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007

int main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f[n+1]={0};
        f[1]=1;
        for(int i=2;i<=n;i++){
            f[i]=i;
            for(int j=1;j<=sqrt(i);j++){
                f[i]=min(f[i],1+f[i-j*j]);
            }
        }
        cout<<f[n]<<endl;

    }
 
 
}