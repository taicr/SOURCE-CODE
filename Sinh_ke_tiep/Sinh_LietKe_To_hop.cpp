#include<bits/stdc++.h>
using namespace std;
int n,k,check,a[1001];
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		i--;
	}
	if(i==0) check=1;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		check=0;
		ktao();
		 while(check==0){
		 	for(int i=1;i<=k;i++){
			cout<<a[i];
		    }
		    cout<<" ";
		    sinh();
		}
		cout<<endl;
	}
}