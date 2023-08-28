#include<bits/stdc++.h>
using namespace std;
int check=false;
int n;
int a[100];
void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=1;
	}

}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==0){
		a[i]=1;
		i--;
	}
	if(i==0) check=true;
	else a[i]=0;
}
int main(){
	
	cin>>n;
	check=false;
	ktao();
	
	while(!check){

		for(int i=1;i<=n;i++){
              if(a[i]==0) cout<<"A";
              else cout<<"B";
			
		}
		cout<<endl;
		sinh();
	}

}