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
bool used[1005];
vi adj[1004];
void dfs(int u){
    used[u]=true;
    for(auto x:adj[u]){
        if(!used[x]) dfs(x);
    }

}
int main() { 
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        adj[x].pb(y);
    }
    for(int i=1;i<=n;i++){
        memset(used,false,sizeof(used));
        dfs(i);
        for(int i=1;i<=n;i++){
            if(!used[i]){
            cout<<0<<endl;
            return 0;
            }
        }
    }
    cout<<1;

}
