/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
int n,m;
int a[1005][1005];
int f[1005][1005];
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a[i][j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        cout<<f[x2][y2]-f[x1-1][y2]-f[x2][y1-1]+f[x1-1][y1-1]<<endl;
    }
}
int main() { 
     solve();

}
