#include<bits/stdc++.h>
using namespace std;

#define rin ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int k,n,check=0;
int a[100];
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i) i--;
	if(i==0) check=1;
	else {
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
	
     }
 }
}

int main(){
	cin>>n>>k;
    ktao();
    while(!check){
    	for(int i=1;i<=k;i++) cout<<a[i];
    	cout<<endl;
    	sinh();
	}

	
} 