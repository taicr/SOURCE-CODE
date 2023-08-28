
#include<bits/stdc++.h>
using namespace std;
int check=0,a[1000],k,n;
vector<vector<int>> res;
void ktao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=n;
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
	cin>>n>>k;
	int b[111];
	check=0;

	for(int i=0;i<k;i++) cin>>b[i];
    ktao();
    while(!check){
    	vector<int> v(a+1,a+k+1);
        res.push_back(v);
        sinh();
    }
    int cnt=0;
    for(int i=res.size()-1;i>=0;i--){
       cnt++;
        int ok=1;
        for(int j=0;j<k;j++){
        	if(res[i][j]!=b[j]){
        		ok=0;
        		break;
        	}
        }
        if(ok) {
        	cout<<cnt;
        	break;
        }
    }

}