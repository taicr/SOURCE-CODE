#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> x,pair<int,int> y) {
	return x.second<y.second;
}

int main() {
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++) {
		int x,y;
		cin>>x>>y;
		v.push_back({x,1});
		v.push_back({y,-1});
	}
	sort(v.begin(),v.end());

	int ans=0,cnt=0;
	for(auto it:v) {
		cnt+=it.second;
		ans=max(ans,cnt);
	}
	cout<<ans;

}
