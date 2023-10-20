/* */
#include<bits/stdc++.h>

using namespace std;
#define run() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define mod 1000000007
#define sotp cout << fixed << setprecision(2) 
#define pb push_back
int check(string s){
    for(int i=1;i<s.size();i++){
        if(abs((s[i]+'0')-(s[i-1]+'0'))>1) return 0;
    }
    return 1;
}
int main() { 
    run();
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    if(check(s)) cout<<"YES"<<endl;
    else cout<<"NO\n";
   }

}
