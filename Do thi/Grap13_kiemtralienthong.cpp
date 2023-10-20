#include<bits/stdc++.h>
using namespace std;
bool used[1005];
vector<int> adj[1004];
void dfs(int u){
	used[u]=true;
	for(auto x:adj[u]){
		if(!used[x])
		dfs(x);
		
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(used,false,sizeof(used));
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			dfs(i);
		}
	}
	cout<<cnt;
}