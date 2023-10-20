/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first
int f[101][101][101];
int  stringmaxx(string s1,string s2,string s3){

      int n=s1.size(),m=s2.size(),p=s3.size();
      for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
          for(int k=0;k<=p;k++){
               if(i==0 || j==0 || k==0 ) f[i][j][k]=0;
            else {
                  if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]) f[i][j][k]= f[i-1][j-1][k-1]+1;
                 else f[i][j][k]=max({f[i-1][j][k],f[i][j-1][k],f[i][j][k-1]});
            }
        }
        }
      }
      return f[n][m][p];
}
int main() { 
    int t;
    cin>>t;
    while(t--){
      int n,m,p;
      cin>>n>>m>>p;
      string s1,s2,s3;
      cin>>s1>>s2>>s3;
      cout<<stringmaxx(s1,s2,s3)<<endl;
    }
    return 0;
}
