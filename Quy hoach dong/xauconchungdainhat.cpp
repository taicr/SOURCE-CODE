#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int dp[1005][1005];
int  stringmaxx(string s1,string s2){
      int n=s1.size(),m=s2.size();
      for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else {
                  if(s1[i-1]==s2[j-1]) dp[i][j]= dp[i-1][j-1]+1;
                 else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
      }
      return dp[n][m];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<stringmaxx(s1,s2)<<endl;
    }
}
