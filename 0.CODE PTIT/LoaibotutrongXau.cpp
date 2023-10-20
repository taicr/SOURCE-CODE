/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
  string s;
  getline(cin,s);
  string s1; cin>>s1;
  stringstream ss(s);
  string token;
  while(ss>>token){
    if(s1!=token) cout<<token<<" ";
  }

}
