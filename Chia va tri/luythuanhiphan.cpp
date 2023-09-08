#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define ll long long
ll powermod(int n,int k){
	if(k==0) return 1;
	ll x=powermod(n,k/2);
	if(k%2==0) return (x*x%mod);
	else return n*(x*x%mod)%mod;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<powermod(n,k);
}