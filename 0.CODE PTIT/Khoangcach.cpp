/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(4) 
#define pb push_back

int main() { 
 int t;
 cin>>t;
 while(t--){
   string s;
    cin>>s;
    if(s[s.size()-1]=='6'  && s[s.size()-2]=='8') cout<<"1\n";
    else cout<<"0\n";
 }

}
