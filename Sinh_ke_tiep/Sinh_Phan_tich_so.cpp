#include<bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int n,a[1000],check,cnt;
void ktao(){
	cnt=1;
	a[1]=n;
}
void sinh(){
	int i=cnt;
	while(i>=0 && a[i]==1) i--;
	if(i==0) check=1;  
	else {
		a[i]--;
		int phanbu= cnt-i +1;   
		cnt=i;
		int q=phanbu /a[i]; 
		int p=phanbu % a[i];
		if(q){

			for(int j=1;j<=q;j++) {
				++cnt;
				a[cnt]=a[i]; 
			}
		}
		if(p){
			cnt++;
			a[cnt]=p;
		}
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" ,stdin);
	freopen("output.txt", "w" ,stdout);
	#endif;
	
	int t ;
	cin>>t;
	while(t--){
		cin>>n;
		ktao();
		check=0;
		while(!check){
			for(int i=1;i<=cnt;i++){
				cout<<"("<<a[i]<<" "<<")";
			}
			sinh();
		}
		cout<<endl;
	}
}
