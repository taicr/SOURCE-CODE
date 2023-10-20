/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
#define vi vector<int>
#define pi pair<int, int>
#define S second
#define F first
int check(ll n){
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  return n>1;

}
int check2(string s){
    ll sum=0;
    for(int i=0;i<s.size();i++){
        if(!check(s[i]-'0')) return 0;
        sum+=s[i]-'0';
    }
    if(check(sum)) return 1;
    return 0;

}
int main() { 
  string s;
  cin>>s;
  if(check2(s)) cout<<"YES";
  else cout<<"NO";

}
