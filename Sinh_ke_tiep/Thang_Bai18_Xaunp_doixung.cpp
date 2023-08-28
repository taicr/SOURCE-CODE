#include<bits/stdc++.h>
using namespace std;
int check=0,n;
string s;
int thuannghich(string s){
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
void ktao(){
      s=string(n,'0');
}
void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i<0 ) check=1;
	else s[i]='1';
}
int main(){
	cin>>n;
	ktao();
	while(!check){
		if(thuannghich(s)) cout<<s<<endl;
		sinh();
	}
}
