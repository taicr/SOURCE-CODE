#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	pair< int,int > a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n,[](pair<int,int>x,pair <int,int>y)->bool{
		return x.second<y.second;
	});
		int dem=1,check=a[0].second;
		for(int i=1;i<n;i++){
			if(a[i].first > check){
				dem++;
				check=a[i].second;
			}
		}
		cout<<dem<<endl;
	}
}