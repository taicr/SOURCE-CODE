/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
bool f[205][40005];
int main() { 
   int t;
   cin>>t;
   while(t--){
      int n,s;
      cin>>n>>s;
      int a[n+1];
      for(int i=1;i<=n;i++) cin>>a[i];
      for(int i=1;i<=n;i++){
         f[i][0]=true;
      }
      for(int i=1;i<=n;i++){
         for(int j=1;j<=s;j++){
            if(j>=a[i]) f[i][j]=f[i-1][j-a[i]] || f[i-1][j];
            else f[i][j]=f[i-1][j];
         }
      }
      if(f[n][s]) cout<<"YES\n";
      else cout<<"NO\n";
   }

}

