#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
int n,k,a[1000];

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i) i--;
	if(i==0){
		for(int i=1;i<=k;i++){
			cout<<i<<" ";
		}
	}
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	sinh();

}