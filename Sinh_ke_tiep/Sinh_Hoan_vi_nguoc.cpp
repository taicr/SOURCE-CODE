#include<bits/stdc++.h>
using namespace std;
int n,a[100];
int check;
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=n-i+1;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1 && a[i]<a[i+1]){
		i--;
	}
	if(i==0) check=1;
	else {
		 int j=n;
		 while(a[i]<a[j]) --j;
		 swap(a[i],a[j]);
		 sort(a+i+1,a+n,greater<int>());
		 
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ktao();
		check=0;
      
		 while(check==0){
        for(int i=1;i<=n;i++){
        	cout<<a[i];	
		}
		cout<<" ";
		sinh();
        
	}
        cout<<endl;
}
}