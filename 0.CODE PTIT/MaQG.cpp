/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back

int main() { 
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4'){
            s.erase(i,3);
        }
    
    }
    cout<<s<<endl;
  }
  

}
