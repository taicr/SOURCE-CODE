#include<bits/stdc++.h>
using namespace std;
void sinh(){
	string s; cin>>s;
	int i=s.size()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1';
		i--;
	}
	if(i>=0) s[i]='0';
    cout<<s<<endl;
    
	
}
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		sinh();
	}
}