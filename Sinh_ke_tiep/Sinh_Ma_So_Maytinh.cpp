#include<bits/stdc++.h>
using namespace std;

vector<string> v1;
vector<string> v2;
int final=0;
string s;
int n;
void sinh(){
	int i=s.size()-1;
	while(i>=0 && s[i]==n+'0') i--;
	if(i<0) final=1;
	else{
		s[i]++;
		for(int j=i+1;j<s.size();j++){
			s[j]='1';
		}
	}
}

int main(){
	cin>>n;
	string t="";
	for(int i=0;i<n;i++){
		t+=(char)('A'+i);
	}
	do{
		v1.push_back(t);
	}while(next_permutation(t.begin(),t.end()));
	for(int i=0;i<n;i++){
		s+='1';
	}
	while(!final){
		v2.push_back(s);
		sinh();
	}
	for(auto x:v1){
		for(auto y:v2){
			cout<<x<<y<<endl;
		}
		
	}
	
}