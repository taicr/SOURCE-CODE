/* */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
 
int main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n;
      cin>>n;
      int a[105][105];
      for(int i=1;i<=n;i++)
         for(int j=1;j<=n;j++)
            cin>>a[i][j];
      ll f[105][105];
      f[0][0]=1;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            f[i][j]=max({f[i-1][j-1],f[i-1][j],f[i-1][j+1]})+a[i][j];
        }
      }
      ll res=0;
      for(int i=1;i<=n;i++){
        res=max(res,f[n][i]);
      }
      cout<<res;
 
}