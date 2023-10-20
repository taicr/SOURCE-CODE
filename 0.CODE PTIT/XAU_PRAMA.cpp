/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
    run();
  int t;
  cin>>t;

  while(t--){
    string s; 
    cin>>s;
    int k;
    cin>>k;
    set<char> st;
    for(int i=0;i<s.size();i++) st.insert(s[i]);
    int len1=st.size();
    if(k+st.size()>=26) cout<<"1"<<endl;
    else cout<<"0"<<endl;
  }

}
