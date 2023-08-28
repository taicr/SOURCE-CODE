#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];
bool check=false;
vector<vector<int>> v;
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh1(){
	int i=k;
	string s;
	while(i>=1 && a[i]==n-k+i) i--;
		if(i==0) check=true;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
			
		}
	}
}
int main(){
	int t; 
	cin>>t; 
	
	while(t--){
		
		cin >> n >> k;
		
		int b[1000];
		ktao(); 
	    for(int i=0;i<k;i++) cin>>b[i];
	    v.clear();
	    check=false;
		while(!check){
			vector<int> tmp(a+1,a+k+1);
			v.push_back(tmp);
		    sinh1();
     	}
     	for(int i=0;i<v.size();i++){
     		
     		for(int j=0;j<k;j++){
     			if(v[i][j]==b[j]){
     				if(i==0) cout<<v[v.size()-1][j];
     				else cout<<v[i-1][j];
				 }

			
		 }
     	cout<<endl;
    }
}
}


// void sinh(){
//	int n,k;
//	cin>>n>>k;
//	vector<int> a(k+1,0);
//	for(int i=1;i<=k;i++){
//		cin>>a[i];
//	}
//	int i=k;
//	while(i>=1 && a[i]==a[i-1]+1) i--;
//	if(i!=0) a[i]--;
//	for(int j=i+1;j<=k;j++){
//		a[j]=n-k+j;
//	}
//	for(int j=1;j<=k;j++){
//		cout<<a[j]<<" ";
//	}
//	cout<<endl;
//}






